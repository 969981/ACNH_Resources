
void FUN_011db9b8(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined1 auStack_28 [8];
  
  uVar5 = *(uint *)(param_2 + 8);
  if (((uVar5 < 0x120) && (*(uint *)(param_2 + 0xc) < 0x100)) &&
     (uVar2 = uVar5 + *(uint *)(param_2 + 0xc) * 0x120, uVar2 < 0x12000)) {
    lVar1 = param_1 + 0x1e368;
    uVar5 = 1 << (ulong)(uVar5 & 0x1f);
    lVar3 = (ulong)(uVar2 >> 5) * 4;
    if ((param_3 & 1) != 0) {
      *(uint *)(lVar1 + lVar3) = *(uint *)(lVar1 + lVar3) | uVar5;
      goto LAB_011dba5c;
    }
    *(uint *)(lVar1 + lVar3) = *(uint *)(lVar1 + lVar3) & (uVar5 ^ 0xffffffff);
  }
  else if ((param_3 & 1) != 0) goto LAB_011dba5c;
  DAT_050dfb34 = DAT_050dfb34 | 2;
LAB_011dba5c:
  local_50 = 0;
  if (DAT_05aed670 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar7 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a50240(auStack_28,&local_58,0,param_2);
  lVar1 = DAT_05150358;
  if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
       ((*(long *)(DAT_05150358 + 0x488) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar5 = FUN_0277d6c4(auStack_28);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(auStack_70,auStack_28);
      uVar6 = FUN_0123d890(local_60,4);
      uVar5 = *(uint *)(param_2 + 8);
      if (0x11f < uVar5) {
        return;
      }
      if (0xff < *(uint *)(param_2 + 0xc)) {
        return;
      }
      uVar2 = uVar5 + *(uint *)(param_2 + 0xc) * 0x120;
      if (uVar2 == 0xffffffff) {
        return;
      }
      if (0x11fff < uVar2) {
        return;
      }
      param_1 = param_1 + 0x22b68;
      uVar5 = 1 << (ulong)(uVar5 & 0x1f);
      lVar1 = (ulong)(uVar2 >> 5) * 4;
      if ((uVar6 & 1) == 0) {
        uVar5 = *(uint *)(param_1 + lVar1) & (uVar5 ^ 0xffffffff);
      }
      else {
        uVar5 = *(uint *)(param_1 + lVar1) | uVar5;
      }
      *(uint *)(param_1 + lVar1) = uVar5;
      return;
    }
  }
  uVar5 = *(uint *)(param_2 + 8);
  if ((((uVar5 < 0x120) && (*(uint *)(param_2 + 0xc) < 0x100)) &&
      (uVar2 = uVar5 + *(uint *)(param_2 + 0xc) * 0x120, uVar2 != 0xffffffff)) && (uVar2 < 0x12000))
  {
    param_1 = param_1 + (ulong)(uVar2 >> 5) * 4;
    *(uint *)(param_1 + 0x22b68) =
         *(uint *)(param_1 + 0x22b68) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

