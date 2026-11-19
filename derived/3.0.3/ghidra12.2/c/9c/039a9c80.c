
void FUN_039a9c80(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar3 = PTR_DAT_04bb3490;
  puVar2 = PTR_DAT_04bb3488;
  plVar7 = *(long **)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x50) == 0) {
    if (plVar7 == (long *)0x0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        do {
          FUN_039a9a90(param_1,*puVar11);
          lVar8 = lVar8 + -8;
          puVar11 = puVar11 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_039a9d78;
    }
    (**(code **)(*plVar7 + 8))(plVar7,param_1);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
      puVar11 = *(undefined8 **)(param_1 + 0x48);
      do {
        FUN_039a9a90(param_1,*puVar11);
        lVar8 = lVar8 + -8;
        puVar11 = puVar11 + 1;
      } while (lVar8 != 0);
    }
    lVar8 = *plVar7;
  }
  else {
    if (plVar7 == (long *)0x0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
        puVar1 = PTR_DAT_04bb3498 + 0x10;
        do {
          puVar9 = (undefined8 *)*puVar11;
          puVar10 = (undefined8 *)*puVar9;
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar3);
          }
          if (puVar10 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar10)(puVar10,puVar2);
            if ((uVar5 & 1) == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            if (((param_2 & 1) != 0) && (puVar10 != (undefined8 *)0x0)) {
              uVar6 = (uint)*(ushort *)((long)puVar9 + 0x1c);
              if (*(uint *)(*(long *)(param_1 + 0x50) + 8) <= (uint)*(ushort *)((long)puVar9 + 0x1c)
                 ) {
                uVar6 = 0;
              }
              if (*(short *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + (ulong)uVar6 * 0x18 +
                            0x10) != 0) {
                *(byte *)(puVar10 + 0x5c) = *(byte *)(puVar10 + 0x5c) | 0x20;
                FUN_039af390();
              }
            }
          }
          FUN_039a9a90(param_1,puVar9);
          puVar11 = puVar11 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if ((param_2 >> 1 & 1) != 0) {
        FUN_039afb50(*(undefined8 *)(param_1 + 0x50),param_1);
      }
      if ((param_2 >> 2 & 1) == 0) {
        return;
      }
      FUN_039af950(*(undefined8 *)(param_1 + 0x50),param_1);
      return;
    }
    (**(code **)*plVar7)(plVar7,param_1);
    if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) != 0) goto LAB_039a9ec0;
LAB_039a9ccc:
      if ((param_2 >> 2 & 1) != 0) goto LAB_039a9ed0;
LAB_039a9cd0:
      plVar7 = *(long **)(param_1 + 0x58);
    }
    else {
      FUN_039af270(*(undefined8 *)(param_1 + 0x50),param_1);
      if ((param_2 >> 1 & 1) == 0) goto LAB_039a9ccc;
LAB_039a9ec0:
      FUN_039afb50(*(undefined8 *)(param_1 + 0x50),param_1);
      if ((param_2 >> 2 & 1) == 0) goto LAB_039a9cd0;
LAB_039a9ed0:
      FUN_039af950(*(undefined8 *)(param_1 + 0x50),param_1);
      plVar7 = *(long **)(param_1 + 0x58);
    }
    if (plVar7 == (long *)0x0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        do {
          FUN_039a9a90(param_1,*puVar11);
          lVar8 = lVar8 + -8;
          puVar11 = puVar11 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_039a9d78;
    }
    (**(code **)(*plVar7 + 8))(plVar7,param_1);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
      puVar11 = *(undefined8 **)(param_1 + 0x48);
      do {
        FUN_039a9a90(param_1,*puVar11);
        lVar8 = lVar8 + -8;
        puVar11 = puVar11 + 1;
      } while (lVar8 != 0);
    }
    lVar8 = *plVar7;
  }
  (**(code **)(lVar8 + 0x10))(plVar7,param_1);
LAB_039a9d78:
  *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) & 0xfe;
  return;
}

