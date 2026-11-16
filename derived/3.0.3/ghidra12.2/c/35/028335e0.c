
void FUN_028335e0(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_a8;
  undefined ***local_a0;
  long lStack_98;
  undefined **local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  lVar3 = DAT_055a1bb0;
  if ((*(int *)(param_1 + 0x50) != 0) && (DAT_055a1bb0 != 0)) {
    plVar10 = *(long **)(DAT_055a1bb0 + 8);
    (**(code **)(*plVar10 + 0x20))(plVar10);
    if ((int)plVar10[4] == 0) {
      if ((*(byte *)(plVar10 + 1) & 1) != 0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if ((int)plVar10[0xd] == 0) {
        bVar4 = true;
      }
      else {
        lVar8 = (long)(int)plVar10[0xd] * 8;
        plVar5 = (long *)plVar10[0xe];
        do {
          lVar8 = lVar8 + -8;
          lVar9 = *plVar5;
          if (*(char *)(lVar9 + 0x104) < '\0') break;
          plVar5 = plVar5 + 1;
        } while (lVar8 != 0);
        bVar4 = -1 < *(char *)(lVar9 + 0x104);
      }
      bVar2 = *(byte *)(plVar10 + 1);
      (**(code **)(*plVar10 + 0x28))(plVar10);
      if ((bVar2 & 1) != 0) {
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      if (bVar4) {
        iVar7 = *(int *)(param_1 + 0x50);
        puVar6 = *(undefined4 **)(param_1 + 0x40);
        if (0 < iVar7) {
          iVar1 = 0;
          if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
            iVar1 = *(int *)(param_1 + 0x48);
          }
          puVar6 = puVar6 + (long)(*(int *)(param_1 + 0x4c) - iVar1) * 0xe;
        }
        lVar8 = *(long *)(lVar3 + 0x20);
        if (lVar8 != 0) {
          local_50 = PTR_DAT_04bb2020 + 0x10;
          lStack_98 = *(long *)(puVar6 + 6);
          local_87 = 0;
          local_88 = lStack_98 != 0;
          local_90 = &PTR_LAB_04917c40;
          local_80 = 0;
          local_a8 = 0;
          local_86 = (undefined1)*puVar6;
          local_78 = *(undefined8 *)(lVar3 + 8);
          local_70 = *(undefined8 *)(puVar6 + 2);
          local_68 = *(undefined8 *)(puVar6 + 4);
          uStack_60 = 0;
          local_58 = *(undefined8 *)(puVar6 + 8);
          local_48 = *(undefined8 *)(puVar6 + 0xc);
          local_a0 = &local_90;
          FUN_03f45184(lVar8,&local_a8);
          iVar7 = *(int *)(param_1 + 0x50);
        }
        if (0 < iVar7) {
          iVar1 = 0;
          if (*(int *)(param_1 + 0x4c) + 1 < *(int *)(param_1 + 0x48)) {
            iVar1 = *(int *)(param_1 + 0x4c) + 1;
          }
          *(int *)(param_1 + 0x4c) = iVar1;
          *(int *)(param_1 + 0x50) = iVar7 + -1;
        }
      }
    }
    else {
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

