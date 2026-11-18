
bool FUN_034a488c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  undefined4 local_38;
  
  puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar5 == (undefined8 *)0x0) ||
      (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), (uVar4 & 1) == 0)) ||
     (plVar6 = *(long **)puVar5[0x45], plVar6 == (long *)0x0)) {
    bVar2 = false;
  }
  else {
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 9;
    local_40 = puVar1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
    fVar7 = (float)(**(code **)(plVar6[3] + 0xb0))(plVar6[1]);
    local_38 = 7;
    local_40 = puVar1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
    fVar8 = (float)(**(code **)(plVar6[3] + 0x90))(plVar6[1]);
    bVar2 = fVar8 - fVar7 <= 1.1920929e-07 && -1.1920929e-07 <= fVar8 - fVar7;
  }
  return bVar2;
}

