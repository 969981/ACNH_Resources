
void FUN_025a9210(long param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined *local_70;
  undefined *local_68;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_70 = (undefined *)CONCAT71(local_70._1_7_,*(byte *)(param_1 + 0x18));
    lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_70,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    lVar6 = FUN_026eec4c();
  }
  if (lVar6 != 0) {
    lVar8 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar8 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar8 + 0x2d010) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar8 + 0x2d010), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    uVar4 = *(int *)(param_2 + 8) * 0x200;
    if (uVar4 != 0x7ffffe00) {
      lVar6 = 0;
      uVar12 = 0;
      lVar11 = (ulong)uVar4 << 2;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar9 = *(long *)(lVar8 + 0x2cff8) + *(long *)(lVar8 + 0x2cff0);
        lVar10 = lVar9 + lVar11;
        if (0x3ff < (ulong)uVar4 + lVar6) {
          lVar10 = lVar9;
        }
        if ((*(short *)(lVar10 + 2) != 0 && uVar12 < *(uint *)(param_1 + 0x30)) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar12 * 8), lVar9 != 0)) {
          pcVar2 = (char *)(lVar9 + 8);
          local_68 = &DAT_0406dc47;
          local_70 = puVar1;
          lVar9 = nn::prepo::Struct::GetBuffer();
          if (lVar9 != 0) {
            (**(code **)(local_70 + 0x18))(&local_70);
            nn::prepo::Struct::Add(pcVar2,(long)local_68);
          }
          puVar3 = PTR_DAT_04bb2020 + 0x10;
          local_68 = &DAT_040f7ef1;
          local_70 = puVar3;
          lVar9 = nn::prepo::Struct::GetBuffer();
          if (lVar9 != 0) {
            (**(code **)(local_70 + 0x18))(&local_70);
            nn::prepo::Struct::Add(pcVar2,(long)local_68);
          }
          local_68 = &DAT_04085064;
          local_70 = puVar3;
          lVar9 = nn::prepo::Struct::GetBuffer();
          if (lVar9 != 0) {
            (**(code **)(local_70 + 0x18))(&local_70);
            nn::prepo::Struct::Add(pcVar2,(long)local_68);
          }
          lVar10 = *(long *)(param_1 + 0x28);
          lVar9 = nn::prepo::Array::GetBuffer();
          if (lVar9 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar10 + 8));
          }
          uVar12 = uVar12 + 1;
        }
        lVar6 = lVar6 + 1;
        lVar11 = lVar11 + 4;
      } while ((int)(uVar4 + (int)lVar6) < (int)(uVar4 + 0x200));
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x2d010) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2d010) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

