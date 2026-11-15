
void FUN_022aecd8(uint *param_1,uint *param_2)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auStack_48 [8];
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  uint local_18;
  uint local_14;
  
  lVar2 = DAT_05150358;
  if (DAT_05150358 != 0) {
    bVar3 = false;
    if ((*(long *)(DAT_05150358 + 0xb0) == 0) ||
       (bVar3 = false, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) goto LAB_022aed6c;
    bVar3 = false;
    if ((*(long *)(DAT_05150358 + 0x488) == 0) ||
       (bVar3 = false, *(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) goto LAB_022aed6c;
    bVar3 = false;
    if ((*(long *)(DAT_05150358 + 0x2b0) == 0) ||
       (bVar3 = false, *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)) goto LAB_022aed6c;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if (uVar4 < *(uint *)(lVar2 + 0x1d8)) {
      bVar3 = *(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar4 * 8) != 0;
      goto LAB_022aed6c;
    }
  }
  bVar3 = false;
LAB_022aed6c:
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  if (bVar3) {
    FUN_0124c030(auStack_48,param_2);
    iVar5 = FUN_0123db50(&local_40,local_38);
    if (iVar5 - 0x18U < 7) {
      uVar4 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar4 = uVar4 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar4 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      DAT_0514cb64 = uVar4;
      iVar5 = FUN_00a8c4b4(DAT_04da7238);
      if (iVar5 - 1U < 6) {
        puVar6 = (undefined4 *)(&PTR_DAT_04a7e9d8)[(int)(iVar5 - 1U)];
      }
      else {
        puVar6 = &DAT_04c47ee0;
      }
      uVar1 = (ushort)puVar6[(ulong)uVar4 * 7 >> 0x20];
    }
    else {
      iVar5 = FUN_0123db50(&local_40,local_38);
      if (iVar5 == 0x1f) {
        uVar4 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar4 = uVar4 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar4 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        uVar7 = (ulong)uVar4 * 7;
        puVar8 = &DAT_04174754;
        DAT_0514cb64 = uVar4;
      }
      else {
        iVar5 = FUN_0123db50(&local_40,local_38);
        if (iVar5 != 0x2e) {
          iVar5 = FUN_0123db50(&local_40,local_38);
          if (5 < iVar5 - 0x12U) {
            return;
          }
          uVar4 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
          DAT_0514cb58 = DAT_0514cb5c;
          DAT_0514cb5c = DAT_0514cb60;
          uVar4 = uVar4 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar4 ^ DAT_0514cb64;
          DAT_0514cb60 = DAT_0514cb64;
          DAT_0514cb64 = uVar4;
          iVar5 = FUN_0123db50(&local_40,local_38);
          if (iVar5 - 0x12U < 6) {
            local_3c = local_3c & 0xffffff1f |
                       (uint)((ulong)uVar4 + (ulong)uVar4 * 2 >> 0x1b) & 0x60;
          }
          else {
            FUN_0123db50(&local_40,local_38);
          }
          *param_1 = local_40;
          param_1[1] = local_3c;
          return;
        }
        uVar4 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar4 = uVar4 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar4 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        uVar7 = (ulong)uVar4 + (ulong)uVar4 * 4;
        puVar8 = &DAT_04174a58;
        DAT_0514cb64 = uVar4;
      }
      uVar1 = (ushort)*(undefined4 *)(puVar8 + (uVar7 >> 0x1e & 0x1c));
    }
    local_18 = (uint)uVar1;
    local_14 = 0;
    FUN_0277d4ac(&local_18);
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

