
undefined8 FUN_011863b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 9000) < 1) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    puVar1 = PTR_DAT_04bb4448 + 0x10;
    lVar9 = param_1 + 200;
    do {
      lVar2 = lVar9;
      if (99 < uVar8) {
        lVar2 = param_1 + 200;
      }
      if (*(char *)(lVar2 + 0x50) == '\0') {
        lVar6 = lVar2 + 0x10;
        uVar4 = FUN_03f2e0c0(lVar6);
        if ((uVar4 & 1) != 0) {
          FUN_03f2dedc(lVar6,0);
        }
        uVar4 = FUN_03f2d924(lVar6);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_03f2eb0c(lVar6);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar7 = 2;
        }
        else {
          puVar5 = (undefined8 *)FUN_03f2d7f0(lVar6);
          if (((DAT_050cc628 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_050cc628), iVar3 != 0))
          {
            DAT_050cc620 = puVar1;
            __cxa_guard_release(&DAT_050cc628);
          }
          if ((((puVar5 == (undefined8 *)0x0) ||
               (uVar4 = (**(code **)*puVar5)(puVar5,&DAT_050cc620), (uVar4 & 1) == 0)) ||
              (puVar5[5] == 0)) || (lVar6 = **(long **)(puVar5[5] + 0x28), lVar6 == 0)) {
            return 1;
          }
          *(long *)(lVar2 + 0x48) = lVar6;
          *(undefined1 *)(lVar2 + 0x50) = 1;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x58;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 9000));
  }
  return uVar7;
}

