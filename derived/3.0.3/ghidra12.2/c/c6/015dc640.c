
int FUN_015dc640(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  Extractor *pEVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *local_88;
  undefined1 *local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_64 [15];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 0x960);
  if (lVar9 == 0) {
    lVar11 = 1;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar9;
  }
  local_55 = 0;
  local_64[0] = 0;
  local_68 = 0x10;
  local_70 = local_64;
  local_78 = PTR_DAT_04bb2ab0 + 0x10;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_88 = puVar1;
  local_80 = (undefined1 *)param_2;
  FUN_038b6c10(&local_78,&local_88);
  local_80 = &DAT_040f46b6;
  local_88 = puVar1;
  (**(code **)(local_78 + 0x18))(&local_78);
  (**(code **)(local_78 + 0x18))(&local_78);
  puVar3 = local_70;
  (**(code **)(local_88 + 0x18))(&local_88);
  if (puVar3 == local_80) {
LAB_015dc770:
    uVar10 = 1;
  }
  else {
    uVar8 = 0;
    bVar4 = true;
    do {
      if (local_70[uVar8] != local_80[uVar8]) break;
      if (local_70[uVar8] == '\0') {
        if (bVar4) goto LAB_015dc770;
        break;
      }
      bVar4 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x80001);
    (**(code **)(local_78 + 0x18))(&local_78);
    (**(code **)(local_78 + 0x18))(&local_78);
    if (local_70 == &DAT_040da168) {
LAB_015dc7e4:
      uVar10 = 2;
    }
    else {
      uVar8 = 0;
      bVar4 = true;
      do {
        if (local_70[uVar8] != (&DAT_040da168)[uVar8]) break;
        if (local_70[uVar8] == '\0') {
          if (bVar4) goto LAB_015dc7e4;
          break;
        }
        bVar4 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
      (**(code **)(local_78 + 0x18))(&local_78);
      (**(code **)(local_78 + 0x18))(&local_78);
      if (local_70 == &DAT_040b5827) {
LAB_015dc860:
        uVar10 = 3;
      }
      else {
        uVar8 = 0;
        bVar4 = true;
        do {
          if (local_70[uVar8] != (&DAT_040b5827)[uVar8]) break;
          if (local_70[uVar8] == '\0') {
            if (bVar4) goto LAB_015dc860;
            break;
          }
          bVar4 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
        (**(code **)(local_78 + 0x18))(&local_78);
        (**(code **)(local_78 + 0x18))(&local_78);
        if (local_70 == &DAT_040df3ee) {
LAB_015dc8d8:
          uVar10 = 4;
        }
        else {
          uVar8 = 0;
          bVar4 = true;
          do {
            if (local_70[uVar8] != (&DAT_040df3ee)[uVar8]) {
LAB_015dc8e0:
              uVar10 = 0;
              break;
            }
            if (local_70[uVar8] == '\0') {
              if (!bVar4) goto LAB_015dc8e0;
              goto LAB_015dc8d8;
            }
            bVar4 = uVar8 < 0x80000;
            uVar8 = uVar8 + 1;
            uVar10 = 0;
          } while (uVar8 != 0x80001);
        }
      }
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pEVar7 = malloc(0x10);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      param_3 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        param_3 = (long *)(lVar6 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    pEVar7 = (Extractor *)(**(code **)(*param_3 + 0x30))(param_3,0x10,8);
  }
  movie::Extractor::Extractor(pEVar7,uVar10,6);
  *(Extractor **)(param_1 + 8) = pEVar7;
  iVar5 = (**(code **)(*(long *)pEVar7 + 0x10))(pEVar7,param_2);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    iVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                      (*(long **)(param_1 + 8),(int *)(param_1 + 0x3b8));
    if ((iVar5 == 0) && (iVar5 = 0, *(int *)(param_1 + 0x3b8) < 1)) {
      iVar5 = 0x3000;
    }
  }
  if (lVar11 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar11;
  }
  return iVar5;
}

