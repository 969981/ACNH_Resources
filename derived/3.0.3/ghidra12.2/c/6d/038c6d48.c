
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_038c6d48(long param_1,undefined8 param_2,long *param_3,uint param_4,int param_5,uint param_6)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (param_3 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar9 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    param_3 = (long *)*puVar6;
    if (param_3 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  if (param_1 == 0) {
    uVar11 = (**(code **)(*param_3 + 0x80))(param_3,param_4);
  }
  else {
    uVar11 = param_1 + 7;
  }
  uVar11 = uVar11 & 0xfffffffffffffff8;
  if (0x128 < uVar11) {
    uVar4 = -param_4;
    if (-1 < (int)param_4) {
      uVar4 = param_4;
    }
    if ((uVar4 & uVar4 - 1) == 0) {
      puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,uVar11,param_5 * param_4);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      iVar3 = -param_5;
      if ((int)param_3[0x11] != -1) {
        iVar3 = param_5;
      }
      if (iVar3 == 1) {
        FUN_038ca450(puVar6,param_2,param_3,puVar6,uVar11,1,param_6 & 1);
        *(undefined2 *)((long)puVar6 + 0xd4) = 0;
        *puVar6 = &PTR_FUN_04b64448;
        puVar6[0x1b] = puVar6 + 0x1b;
        puVar6[0x1c] = puVar6 + 0x1b;
        puVar6[0x1f] = puVar6 + 0x1e;
        puVar6[0x20] = 0xffffffff00000000;
        puVar6[0x1d] = 0xffffffff00000000;
        puVar6[0x1e] = puVar6 + 0x1e;
        puVar10 = puVar6;
        if ((*(uint *)(puVar6 + 0x1a) & 1) == 0) {
          *(undefined4 *)((long)puVar6 + 0xec) = 0;
          *(undefined4 *)((long)puVar6 + 0x104) = 0;
          uVar4 = *(uint *)(puVar6 + 0x1a);
        }
        else {
          nn::os::LockMutex((MutexType *)(puVar6 + 0x16));
          *(undefined4 *)((long)puVar6 + 0xec) = 0;
          *(undefined4 *)((long)puVar6 + 0x104) = 0;
          nn::os::UnlockMutex((MutexType *)(puVar6 + 0x16));
          uVar4 = *(uint *)(puVar6 + 0x1a);
        }
      }
      else {
        puVar10 = (undefined8 *)((long)puVar6 + (uVar11 - 0x108));
        FUN_038ca450(puVar10,param_2,param_3,puVar6,uVar11,iVar3,param_6 & 1);
        *(undefined2 *)((long)puVar6 + (uVar11 - 0x34)) = 0;
        *puVar10 = &PTR_FUN_04b64448;
        lVar5 = (long)puVar6 + (uVar11 - 0x30);
        *(long *)((long)puVar6 + (uVar11 - 0x30)) = lVar5;
        *(long *)((long)puVar6 + (uVar11 - 0x28)) = lVar5;
        lVar5 = (long)puVar6 + (uVar11 - 0x18);
        *(long *)((long)puVar6 + (uVar11 - 0x10)) = lVar5;
        *(undefined8 *)((long)puVar6 + (uVar11 - 8)) = 0xffffffff00000000;
        *(undefined8 *)((long)puVar6 + (uVar11 - 0x20)) = 0xffffffff00000000;
        *(long *)((long)puVar6 + (uVar11 - 0x18)) = lVar5;
        if ((*(uint *)((long)puVar6 + (uVar11 - 0x38)) & 1) == 0) {
          *(undefined4 *)((long)puVar6 + (uVar11 - 0x1c)) = 0;
          *(undefined4 *)((long)puVar6 + (uVar11 - 4)) = 0;
          uVar4 = *(uint *)((long)puVar6 + (uVar11 - 0x38));
        }
        else {
          pMVar1 = (MutexType *)((long)puVar6 + (uVar11 - 0x58));
          nn::os::LockMutex(pMVar1);
          *(undefined4 *)((long)puVar6 + (uVar11 - 0x1c)) = 0;
          *(undefined4 *)((long)puVar6 + (uVar11 - 4)) = 0;
          nn::os::UnlockMutex(pMVar1);
          uVar4 = *(uint *)((long)puVar6 + (uVar11 - 0x38));
        }
      }
      if ((uVar4 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = puVar10 + 0x12;
        nn::os::LockMutex((MutexType *)(puVar10 + 0x16));
      }
      if (*(int *)(puVar10 + 0x11) == 1) {
        puVar7 = puVar10 + 0x21;
      }
      else {
        puVar7 = (undefined8 *)puVar10[6];
      }
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[3] = puVar10[7] + -0x128;
      *(undefined2 *)(puVar7 + 2) = 0xffff;
      plVar8 = puVar10 + 0x1b;
      lVar5 = *plVar8;
      plVar2 = (long *)((long)*(int *)((long)puVar10 + 0xec) + (long)puVar7);
      *plVar8 = (long)plVar2;
      *plVar2 = lVar5;
      plVar2[1] = (long)plVar8;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      *(int *)(puVar10 + 0x1d) = *(int *)(puVar10 + 0x1d) + 1;
      if (puVar6 != (undefined8 *)0x0) {
        nn::os::UnlockMutex((MutexType *)(puVar6 + 4));
      }
      (**(code **)(*param_3 + 0xd0))(param_3,puVar10);
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}

