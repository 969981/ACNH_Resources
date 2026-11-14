
uint FUN_018019b0(long *param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  
  uVar7 = FUN_018017d0();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_0074f690(*(undefined8 *)(param_1[9] + 0x78),param_1 + 0x4f);
    if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 8), lVar8 != 0)) &&
       (uVar7 = (ulong)*(ushort *)(*(long *)(lVar8 + 0x20) + 0xdc), uVar7 != 0)) {
      uVar13 = 0;
      do {
        lVar9 = *(long *)(*(long *)(lVar8 + 0x20) + 0x30);
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(lVar9 + uVar13 * 0x10 + 0x20) + 2;
        }
        (**(code **)(param_1[0x1f1] + 0x18))(param_1 + 0x1f1);
        lVar10 = param_1[0x1f2];
        if (lVar9 == lVar10) goto LAB_01801c18;
        uVar11 = 0;
        bVar5 = true;
        do {
          lVar1 = lVar9 + 2 + uVar11;
          cVar3 = *(char *)(lVar1 + -2);
          if (cVar3 != *(char *)(lVar10 + uVar11)) break;
          if (cVar3 == '\0') {
            if (bVar5) goto LAB_01801c18;
            break;
          }
          cVar3 = *(char *)(lVar1 + -1);
          if (cVar3 != *(char *)(lVar10 + uVar11 + 1)) break;
          if (cVar3 == '\0') goto LAB_01801c18;
          cVar3 = *(char *)(lVar9 + 2 + uVar11);
          if (cVar3 != *(char *)(lVar10 + uVar11 + 2)) break;
          if (cVar3 == '\0') goto LAB_01801c18;
          bVar5 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar7);
    }
    puVar12 = (undefined *)param_1[0x1f2];
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar4 = PTR_DAT_04c4b988;
    if (puVar12 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar8 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar8] == '\0') goto LAB_01801b4c;
        if (PTR_DAT_04c4b988[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01801b4c;
        }
        if (PTR_DAT_04c4b988[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01801b4c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01801b4c:
      iVar2 = (int)lVar8;
      if ((int)param_1[499] <= (int)lVar8) {
        iVar2 = (int)param_1[499] + -1;
      }
      memcpy(puVar12,puVar4,(long)iVar2);
      puVar12[iVar2] = 0;
    }
    puVar12 = (undefined *)param_1[0x50];
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar4 = PTR_DAT_04c4b988;
    if (puVar12 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar8 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar8] == '\0') goto LAB_01801bec;
        if (PTR_DAT_04c4b988[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01801bec;
        }
        if (PTR_DAT_04c4b988[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01801bec;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01801bec:
      iVar2 = (int)lVar8;
      if ((int)param_1[0x51] <= (int)lVar8) {
        iVar2 = (int)param_1[0x51] + -1;
      }
      memcpy(puVar12,puVar4,(long)iVar2);
      puVar12[iVar2] = 0;
    }
    *(undefined4 *)(param_1 + 0x21b) = 0;
  }
LAB_01801c18:
  uVar6 = (**(code **)(*param_1 + 0x1c0))(param_1);
  return (uVar6 ^ 0xffffffff) & 1;
}

