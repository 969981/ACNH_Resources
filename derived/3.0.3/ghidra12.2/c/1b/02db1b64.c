
void FUN_02db1b64(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bc0cb8;
  local_58 = 0;
  plVar6 = (long *)*param_2;
  local_60 = 0;
  if (plVar6 == (long *)0x0) {
    if (param_2[1] != 0) {
      plVar6 = *(long **)(param_2[1] + 0x1d0);
      local_50 = PTR_DAT_04bc0cb8 + 0x10;
      local_48 = 0x29;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
      (**(code **)(plVar6[3] + 0x2b0))(&local_60,plVar6[1]);
      uVar8 = 0;
      local_50 = (undefined *)0x0;
      plVar6 = *(long **)(param_2[1] + 0x58);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_50);
        if (local_50 != (undefined *)0x0) {
          if (((*(long *)(local_50 + 0xb8) != 0) &&
              (lVar5 = FUN_00364ec0(local_50 + 0xb8,"SubWindowOffset"), lVar5 != 0)) &&
             (*(short *)(lVar5 + 8) != 0)) {
            uVar8 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
          }
        }
      }
      goto LAB_02db1bd8;
    }
  }
  else {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 0x29;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
    (**(code **)(plVar6[3] + 0x2b0))(&local_60,plVar6[1]);
  }
  uVar8 = 0;
LAB_02db1bd8:
  puVar7 = (undefined8 *)**(long **)(param_1[0x42] + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  plVar6 = (long *)puVar7[0x3a];
  local_50 = puVar2 + 0x10;
  local_48 = 8;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  (**(code **)(plVar6[3] + 0x98))(plVar6[1],&local_60);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x26e4) = uVar8;
  *(undefined4 *)((long)param_1 + 0x26dc) = uVar1;
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

