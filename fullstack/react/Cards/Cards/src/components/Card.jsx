import React from 'react'
import {Bookmark, Car} from 'lucide-react'

const Card = () => {
  return (
    <div className="card">
        <div>
          <div className="top">
          <img src="https://static.vecteezy.com/system/resources/previews/019/136/322/non_2x/amazon-logo-amazon-icon-free-free-vector.jpg" alt="" />
          <button>Save <Bookmark size={12}/></button>
        </div>
        <div className="center">
          <h3>Amazon<span>5 days ago</span></h3>
          <h2>Senior UI UX Designer</h2>
          <div className='tag'>
            <h3>Part Time</h3>
            <h3>Senior Level</h3>
          </div>
        </div>
        </div>
        <div className="bottom">
          <div>
              <h3>$120/hr</h3>
              <p>Mumbai,India</p>
          </div>
            <button className='apply'>Apply Now</button>
        </div>
      </div>
  )
}

export default Card
