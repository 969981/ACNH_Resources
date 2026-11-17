
void FUN_03017620(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  undefined **local_60;
  undefined4 local_58;
  
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 0x208);
    if (plVar4 != (long *)0x0) {
      local_60 = &PTR_LAB_04aa7fe0;
      local_58 = 0x14;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
      (**(code **)(plVar4[3] + 0x158))((float)(param_3 & 1),plVar4[1]);
    }
    uVar3 = 0;
    do {
      local_60 = (undefined **)CONCAT44(local_60._4_4_,uVar3);
      if ((uVar3 < 0x10) && (lVar2 = *(long *)(param_1 + 0x210 + (ulong)uVar3 * 8), lVar2 != 0)) {
        lVar1 = param_2 + (ulong)uVar3 * 0x10;
        if (0xf < uVar3) {
          lVar1 = param_2;
        }
        FUN_0344d350(**(undefined8 **)(lVar2 + 0x210),lVar1);
      }
      uVar5 = 0x10;
      if ((int)uVar3 < 0x10) {
        uVar5 = uVar3 + 1;
      }
      uVar3 = uVar5;
    } while (uVar5 != 0x10);
    lVar2 = *(long *)(param_1 + 0x288);
    if ((lVar2 != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar2 + 0x230) + (ulong)(1 < *(uint *)(lVar2 + 0x228)) * 8),
       plVar4 != (long *)0x0)) {
      local_60 = &PTR_LAB_04aa7fe0;
      local_58 = 0x14;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
      (**(code **)(plVar4[3] + 0x158))((float)((param_3 ^ 0xffffffff) & 1),plVar4[1]);
    }
  }
  return;
}

