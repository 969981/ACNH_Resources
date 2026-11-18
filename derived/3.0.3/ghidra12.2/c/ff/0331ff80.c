
/* WARNING: Removing unreachable block (ram,0x03320558) */

void FUN_0331ff80(long *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 int *param_6,byte param_7)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 local_60;
  char *local_58;
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_DAT_04bb4fb0;
  *(int *)(param_1 + 0x61) = param_2;
  lVar5 = *(long *)(*(long *)puVar2 + 0x10);
  if (lVar5 != 0) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,param_2);
    if (*(int *)(lVar5 + 0x40) != param_2) {
      *(int *)(lVar5 + 0x40) = param_2;
      FUN_033654d4();
    }
  }
  (**(code **)(*param_1 + 0x148))(param_1,param_3 & 1,param_4,param_5,param_6);
  FUN_032d1220(param_1[0x5e]);
  if (param_1[0x5f] != 0) {
    FUN_032d1220();
  }
  puVar2 = PTR_DAT_04bc9410;
  if ((param_1[0x68] != 0) && (plVar11 = (long *)param_1[0x6d], *plVar11 == 0)) {
    puVar12 = *(undefined8 **)PTR_DAT_04bc9410;
    pMVar1 = (MutexType *)(puVar12 + 5);
    nn::os::LockMutex(pMVar1);
    puVar3 = (undefined8 *)*puVar12;
    if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
      *puVar12 = plVar11;
    }
    else {
      do {
        puVar12 = puVar3;
        puVar3 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      puVar12[2] = plVar11;
      plVar11[1] = (long)puVar12;
      puVar12 = (undefined8 *)*puVar12;
    }
    *plVar11 = (long)puVar12;
    nn::os::UnlockMutex(pMVar1);
  }
  if ((param_1[0x6a] != 0) && (plVar11 = (long *)param_1[0x6e], *plVar11 == 0)) {
    puVar12 = *(undefined8 **)puVar2;
    pMVar1 = (MutexType *)(puVar12 + 5);
    nn::os::LockMutex(pMVar1);
    puVar3 = (undefined8 *)*puVar12;
    if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
      *puVar12 = plVar11;
    }
    else {
      do {
        puVar12 = puVar3;
        puVar3 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      puVar12[2] = plVar11;
      plVar11[1] = (long)puVar12;
      puVar12 = (undefined8 *)*puVar12;
    }
    *plVar11 = (long)puVar12;
    nn::os::UnlockMutex(pMVar1);
  }
  if ((param_1[0x67] != 0) && (plVar11 = (long *)param_1[0x70], *plVar11 == 0)) {
    puVar12 = *(undefined8 **)puVar2;
    pMVar1 = (MutexType *)(puVar12 + 5);
    nn::os::LockMutex(pMVar1);
    puVar3 = (undefined8 *)*puVar12;
    if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
      *puVar12 = plVar11;
    }
    else {
      do {
        puVar12 = puVar3;
        puVar3 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      puVar12[2] = plVar11;
      plVar11[1] = (long)puVar12;
      puVar12 = (undefined8 *)*puVar12;
    }
    *plVar11 = (long)puVar12;
    nn::os::UnlockMutex(pMVar1);
  }
  if ((param_1[0x69] != 0) && (plVar11 = (long *)param_1[0x71], *plVar11 == 0)) {
    puVar12 = *(undefined8 **)puVar2;
    pMVar1 = (MutexType *)(puVar12 + 5);
    nn::os::LockMutex(pMVar1);
    puVar3 = (undefined8 *)*puVar12;
    if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
      *puVar12 = plVar11;
    }
    else {
      do {
        puVar12 = puVar3;
        puVar3 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      puVar12[2] = plVar11;
      plVar11[1] = (long)puVar12;
      puVar12 = (undefined8 *)*puVar12;
    }
    *plVar11 = (long)puVar12;
    nn::os::UnlockMutex(pMVar1);
  }
  lVar5 = param_1[0x5e];
  if (*(long *)(lVar5 + 0xf8) == 0) {
    lVar10 = *(long *)(param_1[99] + 0x390);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar11 = *(long **)(*(long *)(lVar10 + 0xf0) + 0x18);
    }
    else {
      local_60 = PTR_DAT_04bc8e68 + 0x10;
      local_58 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar11 = (long *)FUN_032cb8e0(auStack_38,&local_60,*(undefined8 *)(lVar10 + 0xf0));
    }
    uVar6 = (**(code **)(*plVar11 + 0x60))(plVar11,"N_Content",1);
    FUN_032d1c90(lVar10,lVar5,uVar6);
  }
  lVar5 = param_1[0x5f];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xf8) == 0)) {
    lVar10 = *(long *)(param_1[99] + 0x390);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar11 = *(long **)(*(long *)(lVar10 + 0xf0) + 0x18);
    }
    else {
      local_60 = PTR_DAT_04bc8e68 + 0x10;
      local_58 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar11 = (long *)FUN_032cb8e0(auStack_38,&local_60,*(undefined8 *)(lVar10 + 0xf0));
    }
    uVar6 = (**(code **)(*plVar11 + 0x60))(plVar11,"N_ContentU",1);
    FUN_032d1c90(lVar10,lVar5,uVar6);
  }
  plVar11 = param_1 + 0x74;
  lVar10 = param_1[0x74];
  lVar5 = *(long *)PTR_DAT_04bc8e90;
  if (lVar10 == 0) {
    lVar10 = param_1[0x76];
    if (lVar10 != 0) {
      lVar9 = param_1[0x77];
      goto LAB_033202d8;
    }
  }
  else {
    lVar9 = param_1[0x77];
    if (*(long **)(lVar10 + 8) == plVar11) {
      if (lVar9 == 0) {
        *(undefined8 *)(lVar10 + 8) = 0;
      }
      else {
        *(long *)(lVar10 + 8) = lVar9;
        *(undefined8 *)(param_1[0x77] + 0x10) = 0;
      }
      goto LAB_03320308;
    }
    lVar10 = param_1[0x76];
LAB_033202d8:
    *(long *)(lVar10 + 0x18) = lVar9;
  }
  if (param_1[0x77] != 0) {
    *(long *)(param_1[0x77] + 0x10) = param_1[0x76];
  }
LAB_03320308:
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x74] = lVar5 + 0x88;
  if (*(long *)(lVar5 + 0x90) == 0) {
    *(long **)(lVar5 + 0x90) = plVar11;
  }
  else {
    lVar10 = *(long *)(lVar5 + 0x90);
    do {
      lVar9 = lVar10;
      lVar10 = *(long *)(lVar9 + 0x18);
    } while (*(long *)(lVar9 + 0x18) != 0);
    *(long **)(lVar9 + 0x18) = plVar11;
    param_1[0x76] = lVar9;
  }
  local_60._0_4_ = 6;
  if ((*(ushort *)(param_1 + 0x7e) >> 6 & 1) != 0) {
    param_1[0x79] = *(long *)(lVar5 + 0xb0);
  }
  lVar5 = DAT_0572ba48;
  plVar11 = (long *)param_1[0x72];
  if (*plVar11 == 0) {
    puVar12 = (undefined8 *)(DAT_0572ba48 + 8);
    puVar3 = (undefined8 *)*puVar12;
    if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
      *puVar12 = plVar11;
    }
    else {
      do {
        puVar12 = puVar3;
        puVar3 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      puVar12[2] = plVar11;
      plVar11[1] = (long)puVar12;
      puVar12 = (undefined8 *)*puVar12;
    }
    *plVar11 = (long)puVar12;
    FUN_0328fad0(lVar5);
    local_60._0_4_ = 0;
    if ((*(uint *)((long)plVar11 + 0x2c) & 1) == 0) {
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      local_60._0_4_ = 1;
      *(byte *)(lVar5 + 0xd4) = *(byte *)(lVar5 + 0xd4) & 0xfd;
    }
  }
  FUN_032924d0(param_1[0x72],param_1[0x73]);
  puVar2 = PTR_DAT_04bc1118;
  lVar5 = *(long *)PTR_DAT_04bc1118;
  iVar4 = FUN_0331f740(param_1);
  if ((((iVar4 != 0x13) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
      (*(int *)(lVar5 + 0x1050) != 1)) &&
     ((*(char *)(lVar5 + 0x106a) != '\0' ||
      ((*(char *)(lVar5 + 0x16408) != '\0' && (*(int *)(lVar5 + 0x1568) == 0)))))) {
    *(undefined4 *)(lVar5 + 0x1a68) = 0xffffffff;
    *(int *)(lVar5 + 0x1a44) = iVar4;
    *(undefined4 *)(lVar5 + 0x1810) = 0;
    iVar4 = 0;
    if (DAT_05731028 != -2) {
      iVar4 = DAT_05731028 + 1;
    }
    DAT_05731028 = iVar4;
    *(int *)(lVar5 + 0x1a40) = iVar4;
    *(undefined1 *)(lVar5 + 0x1a4c) = 1;
    *(byte *)(lVar5 + 0x1a48) = (param_7 ^ 1) & 1;
  }
  *(undefined2 *)(param_1 + 0x2be) = 0;
  uVar7 = 1;
  uVar6 = 0;
  lVar5 = *(long *)puVar2;
  *(undefined1 *)((long)param_1 + 0x17dc) = 1;
  if (param_6[0xed] != 1) {
    lVar10 = *(long *)(lVar5 + 0x20);
    if ((*(int *)(lVar10 + 0x1050) == 1) ||
       ((*(char *)(lVar10 + 0x106a) == '\0' &&
        ((*(char *)(lVar10 + 0x16408) == '\0' || (*(int *)(lVar10 + 0x1568) != 0)))))) {
      uVar6 = 0x3f800000;
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
  }
  *(undefined4 *)((long)param_1 + 0x15d4) = uVar7;
  if ((*param_6 == 1) &&
     (uVar6 = 0x40400000, *(short *)((long)param_6 + 0x16) != 0 || (short)param_6[6] != 0)) {
    uVar6 = 0x40000000;
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,6);
  FUN_032c8150(uVar6,param_1[99] + 0x398,6,DAT_0418d974);
  if (param_1[0x5f] != 0) {
    lVar10 = param_1[0x60];
    iVar4 = *(int *)(*(long *)(lVar5 + 0x20) + 0x156c);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,(int)*(char *)(lVar10 + 0x57c));
    if (*(char *)(lVar10 + 0x57c) == 2) {
      local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20);
      if (iVar4 == 1) {
        uVar8 = *(ushort *)(lVar10 + 0x578) & 0xfffe;
      }
      else {
        uVar8 = *(ushort *)(lVar10 + 0x578) | 1;
      }
      plVar11 = *(long **)(lVar10 + 0x548);
      *(ushort *)(lVar10 + 0x578) = uVar8;
      if (plVar11 != (long *)0x0) {
        local_58 = (char *)((ulong)CONCAT31((int3)((ulong)local_58 >> 0x28),iVar4 != 1) << 0x20);
        local_60 = (undefined *)lVar10;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_60);
      }
      uVar6 = 7;
      if (iVar4 == 1) {
        uVar6 = 8;
      }
      FUN_0328a0b0(lVar10,uVar6,1,0);
    }
  }
  if (((param_1[5] != 0) && (-1 < (int)param_1[7])) &&
     (plVar11 = *(long **)(param_1[5] + 0x80), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[6] = (long)(param_1 + 0x1d);
  *(undefined2 *)((long)param_1 + 0x17de) = 0x101;
  return;
}

