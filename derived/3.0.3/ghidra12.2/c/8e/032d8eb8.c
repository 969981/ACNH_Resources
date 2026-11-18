
float FUN_032d8eb8(long *param_1)

{
  long lVar1;
  float fVar2;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [104];
  
  if (*(short *)(*param_1 + 0x112) == 0) {
    fVar2 = 0.0;
  }
  else {
    lVar1 = FUN_0038a89c();
    fVar2 = 0.0;
    if (lVar1 != 0) {
      FUN_00358b98(auStack_98);
      (**(code **)(*(long *)*param_1 + 0x128))((long *)*param_1,auStack_98);
      local_a8 = 0;
      local_a0 = 0;
      FUN_00358d60(auStack_98,&local_a8,*(undefined8 *)(*param_1 + 0xd8),
                   *(undefined2 *)(*param_1 + 0x112));
      fVar2 = (float)local_a0 - (float)local_a8;
      thunk_FUN_0035008c(auStack_98);
    }
  }
  return fVar2;
}

