
void FUN_03321d68(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar7 = *(long *)(param_1 + 800);
  if ((((lVar7 == 0) || (*(char *)(lVar7 + 2000) != '\0')) ||
      ((uint)*(ushort *)(lVar7 + 0x516) == ((uint)param_3 & 0xffff))) &&
     ((((param_4 & 1) != 0 || (*(long *)(param_1 + 0x17d0) == param_2)) &&
      (uVar5 = FUN_03321a70(param_1,param_2,param_3,0), (uVar5 & 1) != 0)))) {
    FUN_03292228(*(undefined8 *)(param_1 + 0x390));
    if ((param_4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x17c8) = 1;
    }
    puVar3 = PTR_DAT_04bc9358;
    if (*(long *)(param_1 + 800) != 0) {
      local_2c = 0;
      local_24 = 0;
      local_38 = *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 800) + 0x390) + 0xf0) + 0x18);
      FUN_032d3460(&local_38,&local_2c);
      puVar8 = *(uint **)puVar3;
      uVar4 = (int)local_2c;
      local_2c = CONCAT44(local_2c._4_4_,4);
      uVar6 = local_2c;
      local_2c._0_4_ = 4;
      if (*puVar8 < 5) {
        local_2c._0_4_ = 0;
      }
      puVar9 = (undefined4 *)(*(long *)(puVar8 + 2) + (long)(int)local_2c * 0xc);
      *puVar9 = uVar4;
      puVar9[1] = local_2c._4_4_;
      iVar2 = 4;
      if (*puVar8 < 5) {
        iVar2 = 0;
      }
      *(undefined1 *)(*(long *)(puVar8 + 2) + (long)iVar2 * 0xc + 8) = 1;
      local_2c = uVar6;
    }
    lVar10 = *(long *)PTR_DAT_04bb4fb0;
    uVar6 = FUN_03368ef0(*(undefined8 *)puVar3,4);
    lVar7 = *(long *)(lVar10 + 8);
    if (lVar7 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar1 = lVar7 + 8;
      }
      FUN_03366350(lVar10,lVar1,s_AppearBalloonExpanded_04b20a42,1,uVar6,0);
      return;
    }
  }
  return;
}

