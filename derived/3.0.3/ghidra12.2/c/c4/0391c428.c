
byte FUN_0391c428(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  undefined *local_78;
  char *pcStack_70;
  int local_64;
  
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  puVar4 = PTR_DAT_04bbd510;
  uVar8 = (uint)*(ushort *)(param_1 + 0x110);
  if (*(ushort *)(param_1 + 0x110) < 2) {
    uVar8 = 1;
  }
  if ((param_3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    if ((param_4 & 1) != 0) {
      local_78 = PTR_DAT_04bb2020 + 0x10;
      lVar9 = *(long *)PTR_DAT_04bbd510;
      pcStack_70 = "render_cubemap_depth";
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar5 == 0) goto LAB_0391c594;
LAB_0391c508:
      local_64 = (int)lVar5 + -1;
      goto LAB_0391c598;
    }
LAB_0391c60c:
    *(undefined8 *)(param_1 + 600) = 0;
    bVar7 = *(byte *)(param_1 + 0x550) | 8;
  }
  else {
    uVar8 = uVar8 << 1;
    lVar9 = *(long *)PTR_DAT_04bbd510;
    *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) | 0x40;
    puVar3 = PTR_DAT_04bb3508;
    puVar2 = PTR_DAT_04bb2020;
    uVar1 = *(undefined2 *)(param_1 + 0x178);
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "render_cubemap_color";
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar5 == 0) {
      local_64 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_64 = (int)lVar5 + -1;
    }
    uVar6 = FUN_03948e10(lVar9,param_2,lVar9 + (long)local_64 * 0x290 + 0x10,&local_78,uVar1,1,uVar8
                         ,uVar8,1,0,1,0,1,0,0,0);
    *(undefined8 *)(param_1 + 0x1b0) = uVar6;
    if ((param_4 & 1) == 0) goto LAB_0391c60c;
    local_78 = puVar2 + 0x10;
    lVar9 = *(long *)puVar4;
    pcStack_70 = "render_cubemap_depth";
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (lVar5 != 0) goto LAB_0391c508;
LAB_0391c594:
    local_64 = nn::os::GetCurrentCoreNumber();
LAB_0391c598:
    lVar5 = FUN_03948e10(lVar9,param_2,lVar9 + (long)local_64 * 0x290 + 0x10,&local_78,0x5a,1,uVar8,
                         uVar8,1,0,1,param_1 + 0x260,1,0,0,0);
    *(long *)(param_1 + 600) = lVar5;
    bVar7 = *(byte *)(param_1 + 0x550) | 8;
    *(byte *)(param_1 + 0x550) = bVar7;
    if (lVar5 == 0) goto LAB_0391c624;
  }
  *(byte *)(param_1 + 0x550) = bVar7 | 0x20;
LAB_0391c624:
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  return *(byte *)(param_1 + 0x550) >> 5 & 1;
}

