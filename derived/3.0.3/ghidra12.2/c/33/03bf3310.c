
void FUN_03bf3310(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 != 0) {
    uVar3 = *(ushort *)(param_1 + 0x44);
    if ((uVar3 != 0) && (uVar7 = (ulong)param_2, param_2 <= uVar3 && uVar3 != param_2)) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x48) + uVar7 * 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        lVar10 = *(long *)(lVar9 + 0x10);
        (**(code **)(*(long *)(param_3 + 8) + 0x18))((long *)(param_3 + 8));
        if (lVar10 == *(long *)(param_3 + 0x10)) {
          return;
        }
        uVar6 = 0;
        bVar4 = true;
        do {
          cVar2 = *(char *)(*(long *)(lVar9 + 0x10) + uVar6);
          if (cVar2 != *(char *)(*(long *)(param_3 + 0x10) + uVar6)) break;
          if (cVar2 == '\0') {
            if (bVar4) {
              return;
            }
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
      }
      *(long *)(*(long *)(param_1 + 0x48) + uVar7 * 8) = param_3;
      (**(code **)(*(long *)(param_3 + 8) + 0x18))((long *)(param_3 + 8));
      uVar5 = FUN_006bd550(*(undefined8 *)(param_3 + 0x10),0);
      *(undefined4 *)(*(long *)(param_1 + 0x50) + uVar7 * 4) = uVar5;
      if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
        lVar10 = (long)*(int *)(param_1 + 0x34);
        lVar9 = *(long *)(param_1 + 0x28) - lVar10;
        do {
          uVar1 = *(uint *)(param_3 + 0x60);
          if ((uVar1 < 2) || (uVar1 == 2)) {
            *(undefined4 *)(*(long *)(lVar9 + 0x78) + uVar7 * 4) = 0;
            uVar1 = *(uint *)(param_3 + 0x60);
          }
          if (uVar1 < 2) {
            FUN_03bf4bac(lVar9,uVar7,0);
          }
          else if (uVar1 == 2) {
            FUN_03bf4cc4(0,lVar9,uVar7);
          }
          lVar9 = *(long *)(lVar9 + lVar10 + 8) - lVar10;
        } while (lVar9 != (param_1 + 0x20) - lVar10);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03bf33fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}

