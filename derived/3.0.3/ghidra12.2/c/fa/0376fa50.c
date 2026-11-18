
int FUN_0376fa50(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined **local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  bVar4 = false;
  iVar6 = 0;
  iVar9 = 0;
  do {
    local_65 = 0;
    lVar1 = (long)iVar9 + (long)iVar9 * 2;
    local_70 = 8;
    local_6c[0] = 0;
    local_80 = &PTR_LAB_04908da0;
    local_78 = local_6c;
    FUN_038d1270(&local_80,"-----");
    if ((ulong)(byte)(&DAT_0545a41b)[lVar1] < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)
                    (PTR_DAT_04bb9e38 + (ulong)(byte)(&DAT_0545a41b)[lVar1] * 8 + 0xb0),
                   (&DAT_0545a41c)[lVar1]);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar8 = (undefined1 *)param_1[1];
    (*(code *)local_80[3])(&local_80);
    if (puVar8 == local_78) {
      return iVar6;
    }
    uVar5 = 0;
    bVar3 = true;
    do {
      lVar1 = param_1[1] + 2 + uVar5;
      cVar2 = *(char *)(lVar1 + -2);
      if (cVar2 != local_78[uVar5]) break;
      if (cVar2 == '\0') {
        if (bVar3) {
LAB_0376fbdc:
          if (!bVar4) {
            return iVar6;
          }
          goto LAB_0376fbe0;
        }
        break;
      }
      cVar2 = *(char *)(lVar1 + -1);
      if (cVar2 != local_78[uVar5 + 1]) break;
      if (cVar2 == '\0') goto LAB_0376fbdc;
      cVar2 = *(char *)(param_1[1] + 2 + uVar5);
      if (cVar2 != local_78[uVar5 + 2]) break;
      if (cVar2 == '\0') goto LAB_0376fbdc;
      bVar3 = uVar5 < 0x7fffe;
      uVar5 = uVar5 + 3;
    } while (uVar5 != 0x80001);
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 1;
    bVar4 = iVar9 == 6;
  } while (iVar6 != 6);
LAB_0376fbe0:
  iVar7 = 0;
  iVar9 = iVar6 + 8;
  do {
    local_65 = 0;
    lVar1 = (long)iVar7 + (long)iVar7 * 2;
    local_70 = 8;
    local_6c[0] = 0;
    local_80 = &PTR_LAB_04908da0;
    local_78 = local_6c;
    FUN_038d1270(&local_80,"-----");
    if ((ulong)(byte)(&DAT_0545a400)[lVar1] < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)
                    (PTR_DAT_04bb9e38 + (ulong)(byte)(&DAT_0545a400)[lVar1] * 8 + 0xb0),
                   (&DAT_0545a401)[lVar1]);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar8 = (undefined1 *)param_1[1];
    (*(code *)local_80[3])(&local_80);
    if (puVar8 == local_78) {
      return iVar6;
    }
    uVar5 = 0;
    bVar4 = true;
    do {
      lVar1 = param_1[1] + 2 + uVar5;
      cVar2 = *(char *)(lVar1 + -2);
      if (cVar2 != local_78[uVar5]) break;
      if (cVar2 == '\0') {
        if (bVar4) {
          return iVar6;
        }
        break;
      }
      cVar2 = *(char *)(lVar1 + -1);
      if (cVar2 != local_78[uVar5 + 1]) break;
      if (cVar2 == '\0') {
        return iVar6;
      }
      cVar2 = *(char *)(param_1[1] + 2 + uVar5);
      if (cVar2 != local_78[uVar5 + 2]) break;
      if (cVar2 == '\0') {
        return iVar6;
      }
      bVar4 = uVar5 < 0x7fffe;
      uVar5 = uVar5 + 3;
    } while (uVar5 != 0x80001);
    bVar4 = iVar6 == iVar9;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
    if (bVar4) {
      return -1;
    }
  } while( true );
}

