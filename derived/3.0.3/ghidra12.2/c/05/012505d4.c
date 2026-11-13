
void FUN_012505d4(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  uint local_68;
  undefined4 local_64;
  undefined **local_60;
  uint local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_48;
  undefined4 local_44;
  
  local_44 = 0;
  local_48 = *param_2 & 0xffff;
  FUN_0277d4ac(&local_48);
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) goto LAB_01250840;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01250840;
  local_50 = (uint *)0x0;
  local_58 = local_48;
  uStack_54 = local_44;
  local_60 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
LAB_0125078c:
    uVar6 = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0125078c;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(&local_48);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_0125078c;
    uVar6 = 0;
    uVar3 = *puVar5;
    local_50 = puVar5;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_01250798;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01250798:
  local_68 = 0x86;
  if (uVar6 == 0x86) {
    uVar4 = FUN_01aed4b8(&local_60);
    local_64 = 0;
    local_68 = *param_2 & 0xffff;
    FUN_0277d4ac(&local_68);
    uVar3 = 0x842;
    DAT_0514f75c._0_4_ = local_68;
    DAT_0514f75c._4_4_ = local_64;
    if (999 < (int)uVar4) {
      uVar3 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar1 = uVar3 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar3 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      uVar3 = *param_2;
      uVar7 = (uint)((ulong)uVar1 * 100 >> 0x20);
      DAT_0514cb64 = uVar1;
      if ((uint)((uVar4 & 0xffffffff) >> 4) < 0x271) {
        if (0x1d < uVar7) {
          uVar3 = 0x842;
        }
      }
      else if (0x1d < uVar7) {
        uVar3 = 0x84b;
      }
    }
    *param_1 = 0xfffe;
    FUN_0277d4ac(param_1);
    *(undefined2 *)param_1 = 0xec9f;
    *(uint *)((long)param_1 + 4) =
         uVar3 & 0xffff | *(uint *)((long)param_1 + 4) & 0xffff0000 | 0x200000;
    return;
  }
LAB_01250840:
  *param_1 = 0xaef;
  FUN_0277d4ac(param_1);
  return;
}

