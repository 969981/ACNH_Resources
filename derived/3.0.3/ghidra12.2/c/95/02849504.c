
undefined8 FUN_02849504(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  int iVar8;
  undefined8 local_40 [2];
  undefined8 local_18;
  
  uVar3 = nn::time::IsValidDate
                    ((uint)*(ushort *)((long)param_1 + 0x34),(uint)*(byte *)((long)param_1 + 0x36),
                     (uint)*(byte *)((long)param_1 + 0x37));
  if ((uVar3 & 1) == 0) {
LAB_0284956c:
    if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
      if ((((*(long *)(DAT_053e0208 + 0x16608) != 0) &&
           (puVar7 = *(uint **)(*(long *)(DAT_053e0208 + 0x16608) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(DAT_053e0208 + 0x16620) < 0x1b ||
           (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 0x1a) != '\0')))) &&
         (((0x1a < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar5 = (ulong)(puVar7[1] * 0x1a + (uint)(ushort)puVar7[2] * 8 + iVar8) + (long)puVar7;
        goto joined_r0x028496a8;
      }
    }
    else if (0x1a < *(uint *)(DAT_053e0208 + 0x16718)) {
      lVar5 = 0xd0;
      if (*(uint *)(DAT_053e0208 + 0x16708) < 0x1b) {
        lVar5 = 0;
      }
      lVar5 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar5);
joined_r0x028496a8:
      if (lVar5 != 0) {
        FUN_0214ca00(local_40);
        cVar1 = *(char *)((long)param_1 + 0x2c);
        local_40[0] = CONCAT44(local_40[0]._4_4_,0x1d0005);
        puVar6 = &DAT_053fe348 + ((long)cVar1 & 0xffffffffU) * 0xba0;
        if (9 < (uint)(int)cVar1) {
          puVar6 = &DAT_053fe348;
        }
        FUN_0214e3f0(puVar6 + 0x8b0,local_40);
        FUN_0219d7e0(&DAT_053fe348,(int)cVar1,0,0);
        *(undefined4 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        FUN_02847d38(param_1,(long)*(char *)(param_1 + 6));
        uVar4 = 1;
        local_40[0]._0_1_ = 2;
        goto LAB_028496b4;
      }
    }
  }
  else {
    local_40[0] = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_18 = FUN_0272eca4((ushort *)((long)param_1 + 0x34),1);
    uVar2 = FUN_00a82474(local_40,&local_18);
    if (1 < uVar2) goto LAB_0284956c;
  }
  local_40[0]._0_1_ = 0;
  uVar4 = 0;
LAB_028496b4:
  *(undefined1 *)((long)param_1 + 0x2f) = (undefined1)local_40[0];
  return uVar4;
}

