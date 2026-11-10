
void FUN_001f8604(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined **local_80 [3];
  undefined8 local_68;
  undefined **local_58 [3];
  undefined8 local_40;
  
  *param_1 = &PTR_FUN_0483d970;
  if (DAT_04c5ee70 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)DAT_04c5ee70[1];
  if (plVar4 != DAT_04c5ee70) {
    do {
      (**(code **)(*(long *)plVar4[2] + 0x18))(local_80);
      plVar4 = DAT_04c5ee70;
      do {
        plVar4 = (long *)plVar4[1];
        if (plVar4 == DAT_04c5ee70) goto LAB_001f868c;
        (**(code **)(*(long *)plVar4[2] + 0x18))(local_58);
        uVar3 = FUN_0018b44c(local_40,local_68);
        local_58[0] = &PTR_LAB_04a426b8;
        FUN_0018b1a0(local_58);
      } while ((uVar3 & 1) == 0);
      if ((long *)plVar4[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[2] + 8))();
      }
      plVar2 = DAT_04c5ee70;
      lVar1 = *plVar4;
      *(long *)(lVar1 + 8) = plVar4[1];
      *(long *)plVar4[1] = lVar1;
      plVar2[2] = plVar2[2] + -1;
      FUN_00187e4c(plVar4);
LAB_001f868c:
      local_80[0] = &PTR_LAB_04a426b8;
      FUN_0018b1a0(local_80);
      plVar4 = (long *)DAT_04c5ee70[1];
    } while (plVar4 != DAT_04c5ee70);
  }
  return;
}

