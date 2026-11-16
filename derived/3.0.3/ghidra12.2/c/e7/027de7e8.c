
void FUN_027de7e8(undefined8 param_1,long param_2,byte *param_3)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  local_24[0] = *param_3;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_24,1);
  if ((param_2 != 0) && (lVar5 != 0)) {
    if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    piVar2 = (int *)(*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
    if (piVar2[7] != 0 && *piVar2 != 0) {
      piVar7 = (int *)FUN_026917f4(param_2);
      if (piVar7 == (int *)0x0) {
        uVar4 = FUN_026b35a0(param_2);
        piVar7 = (int *)(param_2 + 4) + (ulong)uVar4 * 0x17c;
        if (7 < uVar4) {
          piVar7 = (int *)(param_2 + 4);
        }
        FUN_027b5aa4(piVar7,piVar2);
      }
      if (piVar7[7] != 0 && *piVar7 != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "InducementFlag";
        local_50 = puVar1;
        FUN_02747170(piVar7 + 0xe,&local_50,1);
        pcStack_48 = "HasAcquaintanceship";
        local_50 = puVar1;
        FUN_02747170(piVar7 + 0xe,&local_50,1);
      }
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

