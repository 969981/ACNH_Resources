
bool FUN_021c5250(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  int local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = (uint *)0x0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_4);
      puVar4 = PTR_DAT_04bbfe90;
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         ((puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
          puVar11 != (uint *)0x0 && (uVar6 = *puVar11, uVar6 != 0)))) {
        cVar12 = *PTR_DAT_04bbfe88;
        local_70 = puVar11;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(puVar4,0xff,0x1ac);
            uVar6 = *puVar11;
          }
          else {
            uVar3 = *(uint *)(puVar4 + 0x180);
            if (-1 < (int)uVar3) {
              if ((char *)((ulong)uVar3 + (long)puVar11) == (char *)0x0) {
                return false;
              }
              if (*(char *)((ulong)uVar3 + (long)puVar11) == '\0') {
                return false;
              }
              local_a8._0_4_ = 10;
              local_64 = FUN_01ae7550(&local_80);
              if (local_64 == (int)local_a8) {
                return false;
              }
              local_a8._0_4_ = 0xb;
              local_64 = FUN_01ae7550(&local_80);
              if (local_64 == (int)local_a8) {
                return false;
              }
              local_a8._0_4_ = 0xc;
              local_64 = FUN_01ae7550(&local_80);
              if (local_64 == (int)local_a8) {
                return false;
              }
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0xe);
              local_64 = FUN_01ae7550(&local_80);
              if (local_64 == (int)local_a8) {
                return false;
              }
              local_98 = 0;
              local_a8 = PTR_DAT_04bbc1a0 + 0x10;
              puStack_a0 = PTR_DAT_04bb2010 + 0x10;
              uStack_88 = 0;
              local_90 = puStack_a0;
              FUN_01afb7fc(&local_80,&local_a8,0);
              iVar1 = param_4[4];
              iVar2 = param_4[5];
              switch(param_4[6]) {
              case 0:
                return *(int *)(param_3 + 0xc) <= ((iVar2 + uStack_88._4_4_) - local_98._4_4_) + 1;
              case 1:
                return *(int *)(param_3 + 8) <= ((iVar1 + uStack_88._4_4_) - local_98._4_4_) + 1;
              case 2:
                bVar5 = SBORROW4(*(int *)(param_2 + 0xc),iVar2);
                iVar1 = *(int *)(param_2 + 0xc) - iVar2;
                break;
              case 3:
                bVar5 = SBORROW4(*(int *)(param_2 + 8),iVar1);
                iVar1 = *(int *)(param_2 + 8) - iVar1;
                break;
              default:
                goto switchD_021c552c_default;
              }
              return iVar1 < 0 == bVar5;
            }
            if (uVar3 != 0xffffffff) {
              return false;
            }
          }
          puVar7 = (uint *)(ulong)uVar6;
          if (puVar7 == (uint *)0x0) {
            return false;
          }
          if (puVar11 == puVar7) {
            return false;
          }
          lVar10 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar11 + (lVar10 - (long)puVar7);
          if (lVar10 == 0) {
            return false;
          }
          uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
          *(undefined4 *)(puVar4 + 0x180) = 0xfffffffe;
          if (uVar8 == 0) {
            return false;
          }
          piVar9 = (int *)(lVar10 + 4);
          while (piVar9[-1] != 0x3cda3274) {
            piVar9 = piVar9 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              return false;
            }
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          *(int *)(puVar4 + 0x180) = iVar1;
          uVar6 = *puVar11;
          if (uVar6 == 0) {
            return false;
          }
        } while( true );
      }
    }
  }
switchD_021c552c_default:
  return false;
}

