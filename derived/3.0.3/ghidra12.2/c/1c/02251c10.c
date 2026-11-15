
void FUN_02251c10(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bc2dd0;
  puVar2 = PTR_DAT_04bc2dc8;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    plVar6 = *(long **)(param_1 + 0x60);
    lVar8 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar5 & 1) != 0)) {
        if (plVar6 != (long *)0x0) {
          *(uint *)(plVar6 + 0x234) = *(uint *)(plVar6 + 0x234) & 0xfffffffe | param_2 & 1;
          if ((param_2 & 1) != 0) {
            FUN_02a77dc0();
            local_70 = PTR_DAT_04bb2020 + 0x10;
            pcStack_68 = "OnKeep";
            if (plVar6[0x227] == 0) {
              return;
            }
            FUN_038501b0(0,plVar6[0x227],5);
            lVar8 = plVar6[0x227];
            if (*(char *)(lVar8 + 0x2c0) != '\0') {
              *(undefined1 *)(lVar8 + 0x2c0) = 0;
              FUN_03855b20(lVar8 + 0xc0,0);
            }
            FUN_0384f8c0(lVar8,&local_70,5,0);
            (**(code **)(*plVar6 + 0x120))(plVar6,&local_70,0,5);
            return;
          }
          FUN_02a77bc0(plVar7);
          goto LAB_02251d78;
        }
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  if ((param_2 & 1) == 0) {
LAB_02251d78:
    *PTR_DAT_04bc2dd8 = 0;
  }
  return;
}

