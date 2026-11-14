
/* WARNING: Removing unreachable block (ram,0x0178b034) */
/* WARNING: Removing unreachable block (ram,0x0178b048) */

void FUN_0178ade0(long param_1,long *param_2,long *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  undefined1 uVar4;
  short sVar5;
  undefined *puVar6;
  void *__src;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  void *__dest;
  
  lVar9 = DAT_05ae7600;
  if (param_2[0x230] == 0) {
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(0x58);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar9 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_0178aecc;
      }
      puVar8 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x58,8);
    }
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar8 + 1) = 0xffff;
      *(undefined2 *)(puVar8 + 3) = 0xffff;
      *(undefined2 *)(puVar8 + 5) = 0xffff;
      *(undefined2 *)(puVar8 + 7) = 0xffff;
      *(undefined2 *)(puVar8 + 9) = 0xffff;
      *(undefined2 *)(puVar8 + 0xb) = 0xffff;
      *(undefined2 *)(puVar8 + 0xc) = 0xffff;
      *(undefined2 *)(puVar8 + 0xe) = 0xffff;
      *(undefined2 *)(puVar8 + 0x11) = 0xffff;
      *(undefined2 *)(puVar8 + 0x13) = 0xffff;
      *(undefined2 *)(puVar8 + 0x15) = 0xffff;
      *puVar8 = 0xffffffff;
      puVar8[2] = 0xffffffff;
      puVar8[4] = 0xffffffff;
      puVar8[6] = 0xffffffff;
      puVar8[8] = 0xffffffff;
      puVar8[10] = 0xffffffff;
      *(undefined4 *)((long)puVar8 + 0x32) = 0xffffffff;
      *(undefined4 *)((long)puVar8 + 0x3a) = 0xffffffff;
      puVar8[0x10] = 0xffffffff;
      puVar8[0x12] = 0xffffffff;
      puVar8[0x14] = 0xffffffff;
      *(undefined4 *)(param_2 + 0x22f) = 0xb;
      param_2[0x230] = (long)puVar8;
    }
  }
LAB_0178aecc:
  if (*(char *)(param_1 + 0x350) != '\0') {
    __dest = (void *)param_2[0x205];
    (**(code **)(DAT_0528cff0 + 0x18))(&DAT_0528cff0);
    __src = DAT_0528cff8;
    if (__dest != DAT_0528cff8) {
      (**(code **)(DAT_0528cff0 + 0x18))(&DAT_0528cff0);
      lVar9 = 0;
      do {
        if (*(char *)((long)DAT_0528cff8 + lVar9) == '\0') goto LAB_0178af6c;
        if (*(char *)((long)DAT_0528cff8 + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0178af6c;
        }
        if (*(char *)((long)DAT_0528cff8 + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0178af6c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0178af6c:
      iVar3 = (int)lVar9;
      if ((int)param_2[0x206] <= (int)lVar9) {
        iVar3 = (int)param_2[0x206] + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
  }
  sVar5 = *(short *)(param_1 + 0x290);
  if (sVar5 == 0xf9) {
    uVar4 = *(undefined1 *)(DAT_05292338 + 0xfe8);
    *(undefined1 *)(param_1 + 0x674) = uVar4;
    *(undefined1 *)(param_1 + 0x675) = uVar4;
    if (param_2[0x227] != 0) {
      FUN_038501b0(0x41200000,param_2[0x227],0);
      lVar9 = param_2[0x227];
      if (*(char *)(lVar9 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar9 + 0x2c0) = 0;
        FUN_03855b20(lVar9 + 0xc0,0);
      }
      puVar6 = PTR_DAT_04bbe368;
      FUN_0384f8c0(lVar9,PTR_DAT_04bbe368,0,0);
      (**(code **)(*param_2 + 0x120))(param_2,puVar6,10,0);
    }
    *(undefined1 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    sVar5 = *(short *)(param_1 + 0x290);
  }
  if (sVar5 == 0xf8) {
    if (param_2[0x227] != 0) {
      FUN_038501b0(0x41200000,param_2[0x227],0);
      lVar9 = param_2[0x227];
      if (*(char *)(lVar9 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar9 + 0x2c0) = 0;
        FUN_03855b20(lVar9 + 0xc0,0);
      }
      puVar6 = PTR_DAT_04bbe358;
      FUN_0384f8c0(lVar9,PTR_DAT_04bbe358,0,0);
      (**(code **)(*param_2 + 0x120))(param_2,puVar6,10,0);
    }
    lVar9 = DAT_05290150;
    if ((DAT_05290150 != 0) && (*(long *)(param_1 + 0x18) == 0 && *(long *)(param_1 + 0x10) == 0)) {
      pMVar1 = (MutexType *)(DAT_05290150 + 0x28);
      nn::os::LockMutex(pMVar1);
      plVar10 = (long *)(lVar9 + 0x48);
      lVar7 = *plVar10;
      plVar2 = (long *)((long)*(int *)(lVar9 + 0x5c) + param_1 + 8);
      *plVar10 = (long)plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)plVar10;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar2;
      }
      *(int *)(lVar9 + 0x58) = *(int *)(lVar9 + 0x58) + 1;
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  return;
}

