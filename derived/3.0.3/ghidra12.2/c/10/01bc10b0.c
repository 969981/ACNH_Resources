
void FUN_01bc10b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  void *__ptr;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb49b8;
  puVar1 = PTR_DAT_04bb2698;
  uVar4 = (ulong)*(int *)(param_1 + 0x2c);
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) < 1) {
    lVar5 = 0;
  }
  lVar7 = lVar5 - uVar4;
  if (lVar5 != 0 && lVar7 != 0) {
    do {
      puVar6 = *(undefined4 **)(lVar7 + 0x28);
      if (puVar6 != (undefined4 *)0x0) {
        if ((*(byte *)(puVar6 + 4) >> 1 & 1) != 0) {
          *(byte *)(puVar6 + 4) = *(byte *)(puVar6 + 4) & 0xf8 | 4;
          if (*(long *)(puVar6 + 0xc) == 0) {
            if (*(long *)(puVar6 + 6) != 0) goto LAB_01bc1194;
          }
          else {
            FUN_03f45838(puVar6 + 8);
            if (*(long *)(puVar6 + 6) == 0) {
              puVar6[5] = 0xe;
            }
            else {
LAB_01bc1194:
              lVar5 = *(long *)puVar2;
              if (lVar5 != 0) {
                FUN_03f350f4(lVar5,puVar6 + 2);
              }
            }
          }
        }
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        puVar6[0x12] = 0;
        **(undefined1 **)(puVar6 + 0x16) = 0;
        **(undefined1 **)(puVar6 + 0x2c) = 0;
        __ptr = *(void **)(lVar7 + 0x28);
        if (__ptr != (void *)0x0) {
          if ((*(byte *)((long)__ptr + 0x10) >> 1 & 1) != 0) {
            *(byte *)((long)__ptr + 0x10) = *(byte *)((long)__ptr + 0x10) & 0xf8 | 4;
            if (*(long *)((long)__ptr + 0x30) == 0) {
              if (*(long *)((long)__ptr + 0x18) != 0) goto LAB_01bc1204;
            }
            else {
              FUN_03f45838((long)__ptr + 0x20);
              if (*(long *)((long)__ptr + 0x18) == 0) {
                *(undefined4 *)((long)__ptr + 0x14) = 0xe;
              }
              else {
LAB_01bc1204:
                lVar5 = *(long *)puVar2;
                if (lVar5 != 0) {
                  FUN_03f350f4(lVar5,(long)__ptr + 8);
                }
              }
            }
          }
          FUN_03f457c4((long)__ptr + 0x20);
          if (*(long *)puVar1 == 0) {
            free(__ptr);
          }
          else {
            plVar3 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
            }
          }
        }
        *(undefined8 *)(lVar7 + 0x28) = 0;
        uVar4 = (ulong)*(uint *)(param_1 + 0x2c);
      }
      lVar5 = *(long *)(lVar7 + (int)uVar4 + 8);
      lVar7 = lVar5 + -(int)uVar4;
    } while (lVar5 != param_1 + 0x18 && lVar7 != 0);
  }
  return;
}

