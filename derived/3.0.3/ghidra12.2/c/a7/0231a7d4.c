
undefined8 FUN_0231a7d4(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined *puVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  byte local_38 [4];
  undefined4 local_34;
  
  uVar8 = FUN_024f5320();
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  uVar8 = FUN_022bab7c(local_38,param_2,param_3);
  puVar5 = PTR_DAT_04bb6298;
  puVar2 = PTR_DAT_04bb27d0;
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if ((*(long **)PTR_DAT_04bb27d0 != (long *)0x0) &&
     (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))) {
    pcVar9 = (char *)FUN_02582a24(param_1);
    lVar11 = **(long **)puVar2;
    bVar3 = *(byte *)(lVar11 + 0x473);
    pcVar10 = PTR_DAT_04bc1220;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar10 = (char *)(lVar11 + 0x472);
      }
    }
    if (((((*pcVar9 != *pcVar10) && (lVar11 = *(long *)PTR_DAT_04bbbc68, lVar11 != 0)) &&
         (*(long *)(lVar11 + 0xb0) != 0)) &&
        ((*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0 && (*(long *)(lVar11 + 0x488) != 0)))) &&
       ((*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0 &&
        ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))))) {
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        sVar4 = *(short *)puVar5;
        if (sVar4 != -1) {
          local_50 = CONCAT44(local_50._4_4_,0x20);
          puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
          if (0xff < (uint)(int)sVar4) {
            puVar2 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_0231a994;
        }
        FUN_0124c030(&local_50,param_2);
        iVar7 = FUN_0123db50(auStack_48,local_40);
        if (iVar7 == 0x22) {
          return 0;
        }
        iVar7 = FUN_0123db50(auStack_48,local_40);
        if (iVar7 == 0x21) {
          return 0;
        }
      }
    }
  }
LAB_0231a994:
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  FUN_016e49e4(&local_50,param_2,0);
  sVar4 = *(short *)puVar5;
  if (sVar4 != -1) {
    local_34 = 0x20;
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (iVar7 = FUN_0277d6c4(&local_50), iVar7 == 0xecc1)) {
      return 1;
    }
  }
  uVar8 = FUN_0277e788(&local_50);
  if (((uVar8 & 1) == 0) && (uVar8 = FUN_016e4f68(&local_50), (uVar8 & 1) == 0)) {
    return 0;
  }
  return 1;
}

