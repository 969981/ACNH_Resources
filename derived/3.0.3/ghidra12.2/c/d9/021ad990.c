
void FUN_021ad990(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  
  lVar15 = *DAT_0537d558;
  bVar3 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar15 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      bVar6 = *(byte *)(lVar15 + 0x472) == bVar3;
      lVar18 = 0x55c28;
      if (!bVar6) {
        lVar18 = 0x55c30;
      }
      lVar18 = param_1 + lVar18;
      goto LAB_021ada34;
    }
  }
  lVar18 = param_1 + 0x55c28;
  bVar6 = true;
LAB_021ada34:
  bVar3 = *(byte *)(lVar15 + 0x476);
  lVar15 = 0;
  bVar13 = true;
  do {
    local_64 = *(uint *)(lVar18 + lVar15 * 4);
    if ((local_64 == 0xffffffff) || (lVar8 = FUN_0265c2a0(), lVar8 == 0)) goto LAB_021ada90;
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      local_68 = *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10764);
    }
    else {
      uVar10 = (**(code **)*puVar9)();
      local_68 = *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10764);
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    if (local_68 == 7) goto LAB_021ada90;
    if (((local_64 < 10) && ((&DAT_053fee41)[(ulong)local_64 * 0xba0] != '\0')) &&
       ((&DAT_053fedf4)[(ulong)local_64 * 0x2e8] - 5 < 2)) {
      bVar5 = true;
    }
    else {
      if ((local_68 == 1) && (uVar10 = FUN_02917058(), (uVar10 & 1) == 0)) goto LAB_021ada90;
      bVar5 = false;
    }
    local_6c = 5;
    switch(local_68) {
    case 2:
      local_6c = 3;
      break;
    case 4:
      local_6c = 0;
joined_r0x021adba0:
      if (!bVar5) goto LAB_021adbc4;
      goto LAB_021adc04;
    case 5:
      local_6c = 1;
    default:
      goto joined_r0x021adba0;
    case 6:
      local_6c = 2;
    }
    if (bVar5) {
LAB_021adc04:
      puVar17 = &DAT_053fe348 + (ulong)local_64 * 0xba0;
      if (9 < local_64) {
        puVar17 = &DAT_053fe348;
      }
      if (1 < bVar3) {
        lVar8 = 0xafc;
        if (!bVar6) {
          lVar8 = 0xb00;
        }
        if (DAT_055c1b60 != &DAT_055c1b58) {
          iVar12 = 0;
          puVar9 = DAT_055c1b60;
          do {
            if (*(int *)(puVar9 + -1) == *(int *)(puVar17 + lVar8)) goto LAB_021adc78;
            puVar9 = (undefined8 *)puVar9[1];
            iVar12 = iVar12 + 1;
          } while (puVar9 != &DAT_055c1b58);
        }
        iVar12 = 0xffff;
LAB_021adc78:
        uVar10 = FUN_01d69340(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),iVar12,1);
        if ((uVar10 & 1) != 0) goto LAB_021ada90;
      }
      lVar8 = *(long *)(puVar17 + 0xaa0);
      local_70 = 1;
      FUN_021dafb0(&local_64,&local_70,0,0,1,1);
      if (bVar5) {
        if ((local_68 == 2) || (*(int *)(puVar17 + 0xaac) == 6)) {
LAB_021add14:
          local_70 = 0;
          lVar8 = *DAT_0537d558;
          bVar4 = *(byte *)(lVar8 + 0x473);
          if ((long)(char)bVar4 == 0xffffffffffffffff) {
LAB_021add5c:
            puVar16 = (undefined4 *)(puVar17 + 0xafc);
          }
          else {
            pbVar2 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
            if (7 < bVar4) {
              pbVar2 = (byte *)(lVar8 + 0x48);
            }
            if (((*pbVar2 >> 3 & 1) == 0) || (*(byte *)(lVar8 + 0x472) == bVar4)) goto LAB_021add5c;
            puVar16 = (undefined4 *)(puVar17 + 0xb00);
          }
          uVar10 = FUN_02b64e40(&local_70,*puVar16);
          if ((((uVar10 & 1) != 0) && (uVar7 = FUN_026641e0(local_70,0), uVar7 < 10)) &&
             ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
            uVar10 = (ulong)uVar7;
            lVar8 = uVar10 * 0xba0;
            FUN_021956e0(&DAT_053fe348 + lVar8);
            puVar1 = &DAT_053febf8 + lVar8;
            lVar11 = FUN_0214fac0(puVar1,local_64,(&DAT_053fede8)[uVar10 * 0x174]);
            if (lVar11 != 0) {
              if ((&DAT_053fede8)[uVar10 * 0x174] == 0) {
                uVar14 = 0x22;
              }
              else {
                uVar14 = *(undefined4 *)((&DAT_053fede8)[uVar10 * 0x174] + 4);
              }
              (&DAT_053fedf4)[uVar10 * 0x2e8] = uVar14;
              (&DAT_053fede8)[uVar10 * 0x174] = 0;
              FUN_0214d220(puVar1);
              (&DAT_053fee2e)[lVar8] = 1;
              FUN_0214d690(puVar1,local_64,1,0);
            }
          }
        }
      }
      else if (((lVar8 != 0) && (*(int *)(lVar8 + 4) - 5U < 2)) &&
              (FUN_0214eb90(puVar17 + 0x8b0,local_64,1), local_68 == 2)) goto LAB_021add14;
      *(undefined4 *)(param_1 + 0x55c28 + lVar15 * 4) = 0xffffffff;
      lVar15 = *DAT_0537d558;
      bVar4 = *(byte *)(lVar15 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        pbVar2 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
        if (7 < bVar4) {
          pbVar2 = (byte *)(lVar15 + 0x48);
        }
        if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar4)) {
          *(undefined4 *)(puVar17 + 0xb00) = 0x244db4da;
          goto LAB_021ada90;
        }
      }
      *(undefined4 *)(puVar17 + 0xafc) = 0x244db4da;
    }
    else {
LAB_021adbc4:
      if ((*(uint *)(param_1 + 0x55c3c) != local_6c) &&
         (((5 < local_6c || (local_68 == 1)) ||
          ((*(uint *)(param_1 + 0x55c38) & 1 << (ulong)local_6c) == 0)))) goto LAB_021adc04;
    }
LAB_021ada90:
    lVar15 = 1;
    bVar5 = !bVar13;
    bVar13 = false;
    if (bVar5) {
      return;
    }
  } while( true );
}

