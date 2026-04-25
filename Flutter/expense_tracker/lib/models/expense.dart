import 'package:isar/isar.dart';
//use the below line to generater the isar file
part 'expense.g.dart';
@Collection()
class Expense{
  Id id = Isar.autoIncrement; //0,1,2...
  final String name;
  final double amount;
  final DateTime date;

  Expense({
    required this.name,
    required this.amount,
    required this.date,
  });
}