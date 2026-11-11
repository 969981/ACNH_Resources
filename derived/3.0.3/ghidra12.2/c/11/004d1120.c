
bool FUN_004d1120(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_70 [49];
  char local_3f;
  
  FUN_004385d0(auStack_70);
  FUN_006434f0(param_2,&local_120);
  param_1[1] = uStack_118;
  *param_1 = local_120;
  param_1[3] = uStack_108;
  param_1[2] = local_110;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  FUN_004385e0(auStack_70);
  return local_3f == '\0';
}

