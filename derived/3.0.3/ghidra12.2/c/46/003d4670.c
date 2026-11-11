
void FUN_003d4670(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  
  *(undefined1 *)((long)param_1 + 0x3b) = 1;
  if (*(char *)((long)param_1 + 0x772) != '\0') {
    uVar2 = FUN_003ca198();
    FUN_003ca594(uVar2,param_1 + 0x18);
    *(undefined1 *)((long)param_1 + 0x772) = 0;
  }
  if (*(char *)((long)param_1 + 0x39) != '\0') {
    *(undefined1 *)((long)param_1 + 0x39) = 0;
  }
  if ((char)param_1[7] != '\0') {
    (**(code **)(*param_1 + 0x38))(param_1,0);
    uVar1 = *(uint *)((long)param_1 + 0xdc);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      plVar5 = param_1 + 0x99;
      do {
        piVar6 = (int *)((long)param_1 + uVar4 * 0xf4 + 0xe0);
        iVar3 = *piVar6;
        if (0 < iVar3) {
          lVar7 = 0;
          plVar8 = plVar5;
          do {
            if (*plVar8 != 0) {
              if (*(char *)(*plVar8 + 0xc1) != '\0') {
                FUN_003bf544();
              }
              *plVar8 = 0;
              iVar3 = *piVar6;
            }
            lVar7 = lVar7 + 1;
            plVar8 = plVar8 + 2;
          } while (lVar7 < iVar3);
        }
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 0x15;
      } while (uVar4 != uVar1);
    }
  }
  if (*(char *)((long)param_1 + 0x771) != '\0') {
    FUN_003c5db8(param_1);
    *(undefined1 *)((long)param_1 + 0x771) = 0;
  }
  return;
}

