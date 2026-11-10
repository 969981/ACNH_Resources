
undefined8 FUN_00222750(void)

{
  undefined8 local_8;
  
  local_8 = 0;
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_8,8);
  return local_8;
}

