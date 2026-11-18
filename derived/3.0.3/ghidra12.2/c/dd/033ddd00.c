
float FUN_033ddd00(float param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long *plVar5;
  float extraout_s0;
  float fVar6;
  float fVar7;
  undefined *local_30;
  undefined4 local_28;
  
  puVar4 = (undefined8 *)**(long **)(*(long *)(param_2 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  fVar6 = extraout_s0;
  if (*(long *)puVar4[0x43] != 0) {
    plVar5 = *(long **)(*(long *)puVar4[0x43] + 0x48);
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    local_28 = 0xb;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
    pfVar3 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
    fVar6 = *pfVar3;
  }
  if (*(long *)PTR_DAT_04bb2908 == 0) {
    fVar7 = 1920.0;
    pfVar3 = (float *)PTR_DAT_04bc9b50;
  }
  else {
    fVar7 = 960.0;
    pfVar3 = (float *)PTR_DAT_04bc9b58;
    if (*(char *)(*(long *)PTR_DAT_04bb2908 + 0x78) != '\0') {
      fVar7 = 1920.0;
      pfVar3 = (float *)PTR_DAT_04bc9b50;
    }
  }
  return -(fVar7 * param_1) + *pfVar3 * 0.5 + fVar6 * 0.5;
}

