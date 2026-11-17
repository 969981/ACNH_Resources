
void FUN_02caead0(undefined8 param_1,long *param_2,byte *param_3,int param_4,ulong param_5)

{
  undefined1 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  ushort uVar11;
  long lVar12;
  byte local_98 [4];
  int local_94;
  undefined *local_90;
  char *local_88;
  long *local_80;
  byte local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined2 local_6c;
  int local_68;
  undefined1 local_64;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  byte local_44 [4];
  
  local_98[0] = *param_3;
  if (7 < local_98[0]) {
    local_98[0] = 0xff;
  }
  local_94 = param_4;
  lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_98,1);
  if (lVar5 != 0) {
    local_64 = 0;
    if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar7 = uVar7 & 0xffffffff;
    }
    local_90 = (undefined *)(*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
    bVar10 = *param_3;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_88 = (char *)CONCAT71(local_88._1_7_,bVar10);
    local_80 = param_2;
    local_78 = FUN_01df8220(param_3);
    local_78 = local_78 & 1;
    if ((*(long **)(lVar5 + 0x3278) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x3278), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    puVar1 = (undefined1 *)(*(long *)(lVar5 + 0x3260) + *(long *)(lVar5 + 0x3258));
    local_76 = *puVar1;
    local_75 = puVar1[1];
    local_74 = puVar1[2];
    local_73 = puVar1[3];
    local_72 = puVar1[4];
    local_71 = puVar1[5];
    local_70 = puVar1[6];
    local_6f = puVar1[7];
    local_6e = puVar1[8];
    local_6c = *(undefined2 *)(puVar1 + 10);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x3278) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x3278) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    local_68 = local_94;
    FUN_01d8382c(*(undefined8 *)PTR_DAT_04bb5030,&local_90);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  if ((param_5 & 1) != 0) {
    lVar12 = *(long *)PTR_DAT_04bc1328;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(short *)(param_2[1] + lVar5 * 2) == 0) goto LAB_02caece0;
      lVar2 = param_2[1] + lVar5 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_02caece0;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_02caece0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02caece0:
    iVar8 = (int)lVar5;
    if (0x1f < iVar8) {
      iVar8 = 0x20;
    }
    uVar11 = (ushort)*param_3;
    if (7 < *param_3) {
      uVar11 = 0xff;
    }
    local_90 = (undefined *)CONCAT62(local_90._2_6_,uVar11 | (ushort)(local_94 << 8));
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy((void *)((ulong)&local_90 | 2),(void *)param_2[1],(ulong)(uint)(iVar8 * 2));
    local_4c = 0;
    local_46 = 0;
    local_48 = 0xff00;
    if (-1 < *(int *)(lVar12 + 0x20)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(lVar12 + 0x20),&local_4c,&local_90,
                   iVar8 * 2 + 2,0);
    }
  }
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_02caedd4:
    if (7 < *pbVar9) {
LAB_02caede0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar5 = **(long **)PTR_DAT_04bb27d0;
        bVar10 = *(byte *)(lVar5 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
          if (7 < bVar10) {
            puVar3 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar9 = (byte *)(lVar5 + 0x471);
          }
        }
        bVar10 = *pbVar9;
        if (bVar10 < 8) goto LAB_02caee50;
      }
      pbVar9 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02caedd4;
      }
      goto LAB_02caede0;
    }
  }
  bVar10 = *pbVar9;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
LAB_02caee50:
  local_44[0] = *param_3;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (local_44[0] == bVar10) {
    local_90 = PTR_DAT_04bb2020 + 0x10;
    local_88 = "ChatBalloonCount";
    local_4c = FUN_02582fe0(local_44);
    FUN_021294b0(&local_90,1,&local_4c);
  }
  return;
}

