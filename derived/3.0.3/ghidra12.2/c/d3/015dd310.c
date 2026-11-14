
void FUN_015dd310(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0x960);
  if (lVar6 == 0) {
    lVar5 = 1;
    puVar7 = *(undefined8 **)(param_1 + 0x950);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar6;
    puVar7 = *(undefined8 **)(param_1 + 0x950);
  }
  if (puVar7 != (undefined8 *)0x0) {
    nn::os::LockMutex((MutexType *)(puVar7 + 0x31));
    iVar8 = *(int *)(puVar7 + 0x2c);
    if (0 < iVar8) {
      do {
        iVar1 = 0;
        if (*(int *)(puVar7 + 0x2b) <= *(int *)((long)puVar7 + 0x15c)) {
          iVar1 = *(int *)(puVar7 + 0x2b);
        }
        uVar2 = *(int *)((long)puVar7 + 0x15c) - iVar1;
        (**(code **)(*(long *)*puVar7 + 0x78))
                  ((long *)*puVar7,
                   *(undefined4 *)
                    (puVar7[0x2a] +
                    (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)));
        if (0 < *(int *)(puVar7 + 0x2c)) {
          *(int *)(puVar7 + 0x2c) = *(int *)(puVar7 + 0x2c) + -1;
          iVar1 = 0;
          if (*(int *)((long)puVar7 + 0x15c) + 1 < *(int *)(puVar7 + 0x2b)) {
            iVar1 = *(int *)((long)puVar7 + 0x15c) + 1;
          }
          *(int *)((long)puVar7 + 0x15c) = iVar1;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    nn::os::UnlockMutex((MutexType *)(puVar7 + 0x31));
  }
  if (lVar5 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar5;
  }
  return;
}

