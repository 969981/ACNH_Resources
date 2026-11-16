
/* WARNING: Removing unreachable block (ram,0x025adc8c) */

void FUN_025ad980(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined *local_60;
  char *local_58;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_60 = (undefined *)CONCAT71(local_60._1_7_,*(byte *)(param_1 + 0x18));
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_60,1);
  }
  else {
    if ((*(int *)(param_1 + 0x1c) == -1) || (DAT_05574040 == 0)) goto LAB_025add8c;
    lVar3 = FUN_026eec4c();
  }
  if (lVar3 != 0) {
    lVar10 = lVar3 + 0x194b0;
    lVar7 = lVar10;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((((*(long **)(lVar7 + 0x2a9c8) != (long *)0x0) &&
         (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x2a9c8), puVar4 != (undefined8 *)0x0)) &&
        (uVar5 = (**(code **)*puVar4)(), (uVar5 & 1) != 0)) &&
       ((*(long *)(lVar7 + 0x2a9c8) != 0 &&
        (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2a9c8) + 8), puVar4 != (undefined8 *)0x0))))
    {
      (**(code **)*puVar4)();
    }
    lVar8 = *(long *)(param_1 + 0x38);
    local_60 = puVar1 + 0x10;
    local_58 = "Insect";
    lVar6 = nn::prepo::Struct::GetBuffer();
    if (lVar6 != 0) {
      (**(code **)(local_60 + 0x18))(&local_60);
      nn::prepo::Struct::Add((char *)(lVar8 + 8),(long)local_58);
    }
    if (((*(long **)(lVar7 + 0x2a990) != (long *)0x0) &&
        (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x2a990), puVar4 != (undefined8 *)0x0)) &&
       ((uVar5 = (**(code **)*puVar4)(), (uVar5 & 1) != 0 &&
        ((*(long *)(lVar7 + 0x2a990) != 0 &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2a990) + 8), puVar4 != (undefined8 *)0x0))))
       )) {
      (**(code **)*puVar4)();
    }
    lVar8 = *(long *)(param_1 + 0x38);
    local_60 = puVar1 + 0x10;
    local_58 = "Fish";
    lVar6 = nn::prepo::Struct::GetBuffer();
    if (lVar6 != 0) {
      (**(code **)(local_60 + 0x18))(&local_60);
      nn::prepo::Struct::Add((char *)(lVar8 + 8),(long)local_58);
    }
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar10 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar10 + 0x86b0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar10 + 0x86b0), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x800);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar10 + 0x86b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar10 + 0x86b0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    lVar10 = *(long *)(param_1 + 0x38);
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 != 0) {
      nn::prepo::Struct::Add((char *)(lVar10 + 8),0x40bc04c);
    }
    lVar3 = DAT_0532a840;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x72);
    if (*(int *)(DAT_0532a840 + 0xe44) != 0) {
      uVar2 = 0;
      do {
        if (*(long **)(lVar7 + 0x2a418) == (long *)0x0) {
          uVar5 = 0;
          if (0xff < uVar2) goto LAB_025adcf4;
LAB_025add2c:
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2a418) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2a418) + 8), puVar4 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar4)();
          }
        }
        else {
          puVar4 = (undefined8 *)**(long **)(lVar7 + 0x2a418);
          uVar5 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar4)();
          }
          if (uVar2 < 0x100) goto LAB_025add2c;
LAB_025adcf4:
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2a418) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2a418) + 8), puVar4 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar4)();
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar3 + 0xe44));
    }
    lVar10 = *(long *)(param_1 + 0x38);
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 != 0) {
      nn::prepo::Struct::Add((char *)(lVar10 + 8),0x405db6e);
    }
  }
LAB_025add8c:
  nn::prepo::Struct::GetSize();
  local_60 = puVar1 + 0x10;
  local_58 = "Collection";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_60,*(undefined8 *)(param_1 + 0x38));
  }
  return;
}

