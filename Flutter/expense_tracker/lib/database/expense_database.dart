import 'package:expense_tracker/models/expense.dart';
import 'package:flutter/material.dart';
import 'package:isar/isar.dart';
import 'package:path_provider/path_provider.dart';

class ExpenseDatabase extends ChangeNotifier{
  static late Isar isar;
  List<Expense> _allExpenses = [];
}

//initialization
//we store it in the local device

static Future<void> initialize() async{
  final dir = await getApplicationDocumentsDirectory();
  Isar = await Isar.open([ExpenseSchema], directory: dir.path)
}

//getter
List<Expense> get allExpense => _allExpenses;

//CRUD operations

//1. create a new expense
Future<void> createNewExpense(Expense newExpense) async{
 
}

//2. read an expense from db

//3.update expense

//delete an expense