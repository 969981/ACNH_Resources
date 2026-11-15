
undefined8 FUN_02209700(long *param_1,byte *param_2)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((undefined1 *)param_1[1] == &DAT_040c5b37) {
LAB_02209794:
    lVar11 = 0;
  }
  else {
    uVar10 = 0;
    bVar4 = true;
    do {
      cVar3 = ((undefined1 *)param_1[1])[uVar10];
      if (cVar3 != (&DAT_040c5b37)[uVar10]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_02209794;
        break;
      }
      bVar4 = uVar10 < 0x80000;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((undefined1 *)param_1[1] == &DAT_040974f0) {
LAB_02209810:
      lVar11 = 1;
    }
    else {
      uVar10 = 0;
      bVar4 = true;
      do {
        cVar3 = ((undefined1 *)param_1[1])[uVar10];
        if (cVar3 != (&DAT_040974f0)[uVar10]) break;
        if (cVar3 == '\0') {
          if (bVar4) goto LAB_02209810;
          break;
        }
        bVar4 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      if ((undefined1 *)param_1[1] == &DAT_0407ce26) {
LAB_02209884:
        lVar11 = 2;
      }
      else {
        uVar10 = 0;
        bVar4 = true;
        do {
          cVar3 = ((undefined1 *)param_1[1])[uVar10];
          if (cVar3 != (&DAT_0407ce26)[uVar10]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_02209884;
            break;
          }
          bVar4 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        if ((undefined1 *)param_1[1] == &DAT_0408d1ee) {
LAB_02209900:
          lVar11 = 3;
        }
        else {
          uVar10 = 0;
          bVar4 = true;
          do {
            cVar3 = ((undefined1 *)param_1[1])[uVar10];
            if (cVar3 != (&DAT_0408d1ee)[uVar10]) break;
            if (cVar3 == '\0') {
              if (bVar4) goto LAB_02209900;
              break;
            }
            bVar4 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          if ((undefined1 *)param_1[1] == &DAT_040cabdc) {
LAB_02209974:
            lVar11 = 4;
          }
          else {
            uVar10 = 0;
            bVar4 = true;
            do {
              cVar3 = ((undefined1 *)param_1[1])[uVar10];
              if (cVar3 != (&DAT_040cabdc)[uVar10]) break;
              if (cVar3 == '\0') {
                if (bVar4) goto LAB_02209974;
                break;
              }
              bVar4 = uVar10 < 0x80000;
              uVar10 = uVar10 + 1;
            } while (uVar10 != 0x80001);
            (**(code **)(*param_1 + 0x18))(param_1);
            (**(code **)(*param_1 + 0x18))(param_1);
            if ((undefined1 *)param_1[1] != &DAT_040c5b3d) {
              uVar10 = 0;
              bVar4 = true;
              while( true ) {
                cVar3 = ((undefined1 *)param_1[1])[uVar10];
                if (cVar3 != (&DAT_040c5b3d)[uVar10]) {
                  return 0;
                }
                if (cVar3 == '\0') break;
                bVar4 = uVar10 < 0x80000;
                uVar10 = uVar10 + 1;
                if (uVar10 == 0x80001) {
                  return 0;
                }
              }
              if (!bVar4) {
                return 0;
              }
            }
            lVar11 = 5;
          }
        }
      }
    }
  }
  puVar12 = (&PTR_s_UnlockSanrioCollaboPoster_04a76d38)[lVar11 * 3];
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = puVar1;
  local_60 = puVar12;
  iVar5 = FUN_0274bce0(param_2,&local_68);
  if (iVar5 != 0) goto LAB_02209a2c;
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_34,1);
  if (lVar6 == 0) goto LAB_02209a2c;
  lVar9 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar6 = *(long *)(lVar9 + 0x2c520);
  if (lVar6 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
      plVar7 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar10 = uVar10 & 0xffffffff;
      if (*(long *)(lVar9 + 0x2c520) == 0) goto LAB_02209b28;
      plVar7 = *(long **)(*(long *)(lVar9 + 0x2c520) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(undefined **)(lVar9 + 0x2c500);
      local_60 = *(undefined **)(lVar9 + 0x2c508);
      uStack_58 = 0x644;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_02209b28:
  lVar6 = *(long *)(lVar9 + 0x2c500);
  lVar2 = *(long *)(lVar9 + 0x2c508);
  local_68 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar11 * 0x18 + 0x4a76d40);
  FUN_0277d4ac(&local_68);
  FUN_02790980(lVar2 + lVar6,&local_68,param_2);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x2c520) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x2c520) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_02209a2c:
  local_68 = puVar1;
  local_60 = puVar12;
  FUN_0274bfe8(param_2,&local_68,1);
  return 1;
}

