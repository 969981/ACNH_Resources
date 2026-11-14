
uint FUN_01b639c0(undefined8 param_1,undefined8 param_2,short *param_3,ushort *param_4)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  short sVar9;
  uint *puVar10;
  int iVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  undefined *local_50;
  long local_48;
  
  uVar2 = *param_4;
  if (uVar2 == 0xffff) {
    return 0;
  }
  local_48 = CONCAT62(local_48._2_6_,uVar2);
  local_50 = PTR_DAT_04bb7648 + 0x10;
  if ((uVar2 < 500) && (lVar6 = FUN_03775cd0(&local_50), lVar6 != 0)) {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
      sVar9 = *(short *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 2);
      *param_3 = sVar9;
    }
    else {
      uVar8 = (**(code **)*puVar7)();
      sVar9 = *(short *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 2);
      *param_3 = sVar9;
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
        sVar9 = *param_3;
      }
    }
    puVar4 = PTR_DAT_04bc0678;
    puVar3 = PTR_DAT_04bc0670;
    if (((sVar9 != -1) && (lVar6 = *(long *)PTR_DAT_04bb4958, lVar6 != 0)) &&
       ((ulong)*param_4 < 500)) {
      uVar2 = *(ushort *)(lVar6 + (ulong)*param_4 * 2 + 0x620);
      if ((int)*(uint *)(lVar6 + 0x1c0) < 1) {
        if (((*(long *)(lVar6 + 0xb0) != 0) &&
            (puVar10 = *(uint **)(*(long *)(lVar6 + 0xb0) + 8), puVar10 != (uint *)0x0)) &&
           (((uVar5 = (uint)uVar2, *(uint *)(lVar6 + 200) <= uVar5 ||
             (*(char *)(*(long *)(lVar6 + 0xd0) + (ulong)uVar5) != '\0')) &&
            (((uVar5 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))))) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * uVar5 + (uint)(ushort)puVar10[2] * 8 + iVar11) +
                            (long)puVar10);
          goto joined_r0x01b63c6c;
        }
      }
      else if ((uint)uVar2 < *(uint *)(lVar6 + 0x1c0)) {
        uVar5 = (uint)uVar2;
        if (*(uint *)(lVar6 + 0x1b0) <= uVar5) {
          uVar5 = 0;
        }
        puVar10 = *(uint **)(*(long *)(lVar6 + 0x1b8) + (ulong)uVar5 * 8);
joined_r0x01b63c6c:
        if (puVar10 != (uint *)0x0) {
          if (*puVar10 != 0) {
            cVar12 = *PTR_DAT_04bc0670;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar5 = *(uint *)(puVar4 + 0x48);
                if (-1 < (int)uVar5) {
                  lVar6 = (ulong)uVar5 + (long)puVar10;
                  goto LAB_01b63bcc;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar10;
              lVar6 = 0;
              if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_01b63bcc;
              lVar6 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
                lVar6 = 0x1c;
              }
              lVar1 = (long)puVar10 + (lVar6 - (long)puVar13);
              if (lVar1 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
              *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
              lVar6 = 0;
              if (uVar8 == 0) goto LAB_01b63bcc;
              piVar14 = (int *)(lVar1 + 4);
              while (piVar14[-1] != 0x34c8eed5) {
                piVar14 = piVar14 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) {
                  lVar6 = 0;
                  goto LAB_01b63bcc;
                }
              }
              iVar11 = 0;
              if (*piVar14 != -1) {
                iVar11 = *piVar14;
              }
              *(int *)(puVar4 + 0x48) = iVar11;
            } while (*puVar10 != 0);
          }
          lVar6 = 0;
LAB_01b63bcc:
          local_48 = *(long *)PTR_PTR_04bc0668;
          if (lVar6 != 0) {
            local_48 = lVar6;
          }
          local_50 = PTR_DAT_04bb2020 + 0x10;
          uVar5 = FUN_01b61690(param_1,param_2,&local_50);
          goto LAB_01b63c74;
        }
      }
    }
  }
  uVar5 = 0;
LAB_01b63c74:
  return uVar5 & 1;
}

