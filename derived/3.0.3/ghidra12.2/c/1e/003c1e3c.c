
void thunk_FUN_003c19b0(long param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if (*(long *)(param_1 + 0x260) != 0) {
    uVar2 = FUN_003c039c();
    if (((param_2 != (long *)0x0) && ((uVar2 & 1) != 0)) &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))(), 4 < (int)uVar1)) {
      lVar6 = 0;
      do {
        fVar8 = 0.0;
        if (lVar6 < (int)param_2[1]) {
          fVar8 = *(float *)(*param_2 + lVar6 * 4);
        }
        fVar7 = (float)FUN_003c0374(*(undefined8 *)(param_1 + 0x260),lVar6 + 4U & 0xffffffff);
        if (fVar8 != fVar7) {
          FUN_003c03ac(fVar8,*(undefined8 *)(param_1 + 0x260),lVar6 + 4U & 0xffffffff);
          *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
        }
        lVar6 = lVar6 + 1;
      } while ((ulong)uVar1 - 4 != lVar6);
    }
    uVar2 = FUN_003c0440(*(undefined8 *)(param_1 + 0x260));
    if (((param_4 != 0) && (param_3 != 0)) && ((uVar2 & 1) != 0)) {
      uVar3 = FUN_003c03d0(*(undefined8 *)(param_1 + 0x260));
      FUN_003c1c00(param_1,param_3,param_4,uVar3);
    }
    uVar2 = FUN_003c04a4(*(undefined8 *)(param_1 + 0x260));
    if ((param_5 != (long *)0x0) && ((uVar2 & 1) != 0)) {
      plVar4 = (long *)FUN_003c0450(*(undefined8 *)(param_1 + 0x260));
      cVar5 = (char)param_5[2];
      lVar6 = plVar4[2];
      if (((cVar5 != '\0') == ((char)lVar6 != '\0')) ||
         ((*(char *)(plVar4 + 2) = cVar5, cVar5 != '\0' || ((char)lVar6 == '\0')))) {
        fVar8 = 0.0;
        if (0.0 <= *(float *)((long)param_5 + 0x14)) {
          fVar8 = *(float *)((long)param_5 + 0x14);
        }
        if (fVar8 != *(float *)((long)plVar4 + 0x14)) {
          *(float *)((long)plVar4 + 0x14) = fVar8;
          *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 0x48;
        }
        uVar1 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))();
        if (0 < (int)uVar1) {
          uVar2 = 0;
          do {
            if ((long)uVar2 < (long)(int)param_5[1]) {
              cVar5 = *(char *)(*param_5 + uVar2);
              if ((long)uVar2 < (long)(int)plVar4[1]) {
                lVar6 = *plVar4;
                if (cVar5 != *(char *)(lVar6 + uVar2)) {
LAB_003c1bd0:
                  *(char *)(lVar6 + uVar2) = cVar5;
LAB_003c1b64:
                  *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
                }
              }
              else if (cVar5 != '\0') goto LAB_003c1b64;
            }
            else if ((long)uVar2 < (long)(int)plVar4[1]) {
              cVar5 = '\0';
              lVar6 = *plVar4;
              if (*(char *)(lVar6 + uVar2) != '\0') goto LAB_003c1bd0;
            }
            uVar2 = uVar2 + 1;
          } while (uVar1 != uVar2);
        }
      }
      else {
        *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 0x48;
      }
    }
  }
  return;
}

