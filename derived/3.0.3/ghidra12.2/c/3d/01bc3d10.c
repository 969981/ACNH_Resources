
void FUN_01bc3d10(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  
  puVar6 = PTR_DAT_04bb28f8;
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar4 = *(ushort *)(param_2 + 0xe);
  local_3c = (uint)uVar3;
  uStack_38 = (uint)uVar4;
  lVar11 = *(long *)PTR_DAT_04bb28f8;
  for (lVar10 = **(long **)(lVar11 + 0x29d0); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar10 + 0x20);
      uVar9 = (uint)uVar3;
      if ((local_3c <= uVar1 && uVar1 != uVar9) ||
         (((uVar1 == uVar9 &&
           (uVar2 = *(uint *)(lVar10 + 0x24), uStack_38 <= uVar2 && uVar2 != uVar4)) &&
          (uVar2 != 0xffffffff)))) break;
      if ((uVar9 <= uVar1) && ((uint)uVar4 <= *(uint *)(lVar10 + 0x24))) {
        if (*(code **)(lVar10 + 0x58) == (code *)0x0) goto LAB_01bc3da0;
        local_34 = (**(code **)(lVar10 + 0x58))(param_2);
        lVar11 = *(long *)puVar6;
        goto LAB_01bc3da4;
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) goto LAB_01bc3da0;
    }
  }
LAB_01bc3da0:
  local_34 = 0;
LAB_01bc3da4:
  lVar12 = param_1[0x41];
  nn::os::LockMutex((MutexType *)(lVar11 + 0x29b0));
  iVar5 = *(int *)(lVar11 + 0x29ec);
  lVar10 = lVar11 + 0x29d8;
  do {
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == lVar11 + 0x29d8) {
      lVar10 = 0;
      break;
    }
  } while (*(int *)(lVar10 + -(long)iVar5 + 0x10) != *(int *)(lVar12 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x29b0));
  if (((lVar10 != 0) && (lVar10 = lVar10 + -(long)iVar5, lVar10 != 0)) &&
     (plVar7 = (long *)FUN_01bc06e0(lVar10,&local_3c,1), plVar7 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar7 + 0x20))();
    (**(code **)(*param_1 + 0x48))(param_1,uVar8,param_1[0x41],param_1 + 0x43);
  }
  return;
}

