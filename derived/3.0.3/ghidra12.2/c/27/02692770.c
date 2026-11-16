
undefined8 FUN_02692770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *local_88;
  char *pcStack_80;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  uVar10 = 1;
  local_88 = (undefined *)FUN_0272eca4(param_1 + 0x12674,1);
  iVar5 = FUN_00a82474(param_2,&local_88);
  if (3 < iVar5) {
    FUN_02507c6c(local_6c,1,1,0,0);
    puVar3 = PTR_DAT_04bb4f78;
    uVar10 = 0;
    local_74 = local_68;
    local_78[0] = local_6c[0];
    if (7 < local_6c[0]) {
      local_78[0] = 0xff;
    }
    local_70 = local_64;
    if (local_6c[0] < 8) {
      local_88 = (undefined *)CONCAT71(local_88._1_7_,local_6c[0]);
      lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_88,1);
      puVar4 = PTR_DAT_04bb5038;
      if (lVar7 != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        bVar2 = local_6c[0];
        do {
          uVar11 = (ulong)bVar2;
          if ((*(long **)(lVar7 + 0x17bb0) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17bb0), puVar8 == (undefined8 *)0x0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)*puVar8)();
            uVar9 = uVar9 & 0xffffffff;
          }
          uVar6 = FUN_026b318c(param_1,*(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90) +
                                       0x1c);
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x17bb0) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17bb0) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
          if (7 < uVar6) break;
          pcStack_80 = "HasAcquaintanceship";
          local_88 = puVar1;
          iVar5 = FUN_02746e10(param_1 + (ulong)uVar6 * 0x5f0 + 0x3c,&local_88);
          if (iVar5 == 0) break;
          do {
            if (uVar11 == 7) {
              return 0;
            }
            uVar11 = uVar11 + 1;
            uVar9 = FUN_02507924(local_78,puVar4 + uVar11);
          } while ((uVar9 & 1) == 0);
          bVar2 = puVar4[uVar11];
          if (7 < bVar2) {
            return 0;
          }
          local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar2);
          local_78[0] = bVar2;
          lVar7 = FUN_025830c0(*(undefined8 *)puVar3,&local_88,1);
        } while (lVar7 != 0);
      }
      uVar10 = 1;
    }
  }
  return uVar10;
}

