
undefined8 FUN_01956f50(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  uint *puVar16;
  char cVar17;
  ulong uVar18;
  undefined8 local_68;
  
  lVar7 = DAT_052cc470;
  if (DAT_052cc470 == 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(int *)(lVar12 + 0x80) == 1)) {
    local_68 = 0x279;
    lVar12 = DAT_052cc470 + 0x680;
    FUN_0277d4ac(&local_68);
    lVar12 = (**(code **)(*(long *)(lVar7 + 0x680) + 0x20))(lVar12);
    uVar8 = FUN_0277d6c4(&local_68);
    if (0x752 < (uVar8 >> 3 & 0x1fff)) {
      return 0;
    }
    if ((*(uint *)(lVar12 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0)
    {
      return 0;
    }
  }
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar5 != 0xffffffffffffffff) {
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8;
    if (0xff < uVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      return 0;
    }
  }
  uVar8 = 0;
  if ((*(long *)PTR_DAT_04bb30a0 != 0) &&
     (uVar8 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204), 1 < uVar8)) {
    uVar8 = 0;
  }
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  lVar12 = FUN_01950d30(lVar7,&local_68);
  uVar18 = 0;
  while( true ) {
    if ((int)*(uint *)(lVar12 + 0x1c0) < 1) {
      lVar13 = *(long *)(lVar12 + 0xb0);
      if (lVar13 == 0) {
        return 0;
      }
      uVar15 = 0;
      if (*(uint **)(lVar13 + 8) != (uint *)0x0) {
        uVar15 = (ulong)**(uint **)(lVar13 + 8);
      }
      if (uVar15 <= uVar18) {
        return 0;
      }
      if ((((lVar13 == 0) || (puVar16 = *(uint **)(lVar13 + 8), puVar16 == (uint *)0x0)) ||
          ((uVar18 < *(uint *)(lVar12 + 200) &&
           (*(char *)(*(long *)(lVar12 + 0xd0) + uVar18) == '\0')))) ||
         (((*puVar16 <= uVar18 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0)))) {
        puVar16 = (uint *)0x0;
      }
      else {
        iVar11 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar16 = (uint *)((ulong)(puVar16[1] * (int)uVar18 + (uint)(ushort)puVar16[2] * 8 + iVar11)
                          + (long)puVar16);
      }
    }
    else {
      if (*(uint *)(lVar12 + 0x1c0) <= uVar18) {
        return 0;
      }
      uVar15 = uVar18 & 0xffffffff;
      if (*(uint *)(lVar12 + 0x1b0) <= uVar18) {
        uVar15 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar12 + 0x1b8) + uVar15 * 8);
    }
    uVar8 = *puVar16;
    if (uVar8 != 0) break;
LAB_019570e0:
    uVar18 = uVar18 + 1;
  }
  cVar17 = DAT_052cba40;
  do {
    if (cVar17 == '\0') {
      cVar17 = '\x01';
      DAT_052cba40 = '\x01';
      memset(&DAT_052cba44,0xff,300);
      uVar8 = *puVar16;
    }
    else {
      if (-1 < (int)DAT_052cba44) {
        if (((short *)((ulong)DAT_052cba44 + (long)puVar16) != (short *)0x0) &&
           (*(short *)((ulong)DAT_052cba44 + (long)puVar16) == 0x279)) {
          sVar6 = *(short *)PTR_DAT_04bb6298;
          if (sVar6 == -1) {
LAB_019572cc:
            lVar13 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,0x20);
            puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
            if (0xff < (uint)(int)sVar6) {
              puVar2 = PTR_DAT_04bc39f8;
            }
            if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_019572cc;
            lVar13 = FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
          }
          bVar4 = *(byte *)(lVar13 + 2);
          uVar8 = *(uint *)(lVar13 + 4);
          if ((uVar8 & 0xfc) == 4) {
            iVar11 = 1;
          }
          else {
            uVar9 = uVar8 & 0xff;
            if ((uVar8 & 0xf8) == 8) {
              iVar11 = 2;
            }
            else if (uVar9 == 0x10) {
              iVar11 = 3;
            }
            else if (uVar9 - 0x11 < 2) {
              iVar11 = 4;
            }
            else {
              iVar11 = 5;
              if (3 < uVar9 - 0x13) {
                iVar11 = 0;
              }
            }
          }
          puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar8 = *puVar10 ^ *puVar10 << 0xb;
          uVar9 = puVar10[3];
          *puVar10 = puVar10[1];
          puVar10[1] = puVar10[2];
          uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar8 ^ uVar9;
          puVar10[2] = uVar9;
          puVar10[3] = uVar8;
          uVar9 = iVar11 + (bVar4 - 1) * 6;
          plVar3 = (long *)(lVar7 + 0x170) + (ulong)uVar9 * 2;
          if (0x47 < uVar9) {
            plVar3 = (long *)(lVar7 + 0x170);
          }
          pcVar14 = (code *)*plVar3;
          if ((plVar3[1] & 1U) != 0) {
            pcVar14 = *(code **)(pcVar14 + *(long *)((long)puVar16 + (plVar3[1] >> 1)));
          }
          uVar9 = (*pcVar14)();
          if ((uint)((ulong)uVar8 * 1000 >> 0x20) < (uVar9 & 0xffff)) {
            return 1;
          }
        }
        goto LAB_019570e0;
      }
      if (DAT_052cba44 != 0xffffffff) goto LAB_019570e0;
    }
    if (((ulong)uVar8 == 0) || (lVar13 = (long)puVar16 - (ulong)uVar8, lVar13 == 0))
    goto LAB_019570e0;
    lVar1 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar13 == 0) goto LAB_019570e0;
    uVar15 = (ulong)*(ushort *)(lVar13 + 8);
    DAT_052cba44 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_019570e0;
    puVar10 = (uint *)(lVar1 + lVar13 + 4);
    while (puVar10[-1] != 0x20cb67bc) {
      puVar10 = puVar10 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_019570e0;
    }
    DAT_052cba44 = 0;
    if (*puVar10 != 0xffffffff) {
      DAT_052cba44 = *puVar10;
    }
    uVar8 = *puVar16;
    if (uVar8 == 0) goto LAB_019570e0;
  } while( true );
}

