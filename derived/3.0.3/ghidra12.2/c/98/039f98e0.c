
/* WARNING: Removing unreachable block (ram,0x039f9a8c) */

undefined8 FUN_039f98e0(long param_1,long *param_2,ushort param_3,long *param_4)

{
  undefined *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long lStack_48;
  int local_24;
  
  *(long **)(param_1 + 8) = param_2;
  *(ushort *)(param_1 + 0x16) = param_3;
  lVar8 = (ulong)(uint)param_3 * 0x70;
  *(ushort *)(param_1 + 0x14) = param_3;
  uVar2 = *(ushort *)(*(long *)(param_2[0x23] + lVar8) + 0x52);
  *(ushort *)(param_1 + 0x16) = uVar2;
  lVar8 = *(long *)(*(long *)(param_2[0x23] + lVar8) + 0x48);
  *(long *)(param_1 + 0x20) = lVar8;
  uVar9 = *(undefined8 *)(*(long *)(param_2[0x24] + (ulong)uVar2 * 0x80) + 0x80);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  puVar1 = PTR_PTR_04c4bc88;
  *(byte *)(param_1 + 0x25a) =
       *(byte *)(param_1 + 0x25a) & 0xfd |
       (*(char *)(param_2[0x23] + (ulong)(uint)param_3 * 0x70 + 0xd) != '\0') << 1;
  uVar3 = *(undefined2 *)(lVar8 + 0x110c);
  *(undefined8 **)(param_1 + 0x200) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x30) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x38) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x208) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x40) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x48) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x210) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x50) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x58) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x218) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x60) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x68) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x220) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x70) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x78) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x228) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x80) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x88) = &DAT_05ae9cd8;
  *(undefined2 *)(param_1 + 0x10) = uVar3;
  *(undefined8 **)(param_1 + 0x90) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x98) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xa0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xa8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xb0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xb8) = &DAT_05ae9cd8;
  *(uint *)(param_1 + 0x230) = (uint)*(ushort *)(param_1 + 0x232) << 0x10;
  *(undefined8 **)(param_1 + 0xc0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 200) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xd0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xd8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xe0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xe8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xf0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0xf8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x100) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x108) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x110) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x118) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x120) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x128) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x130) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x138) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x140) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x148) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x150) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x158) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x160) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x168) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x170) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x178) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x180) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x188) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 400) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x198) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1a0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1a8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1b0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1b8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1c0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1c8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1d0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1d8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1e0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1e8) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1f0) = &DAT_05ae9cd8;
  *(undefined8 **)(param_1 + 0x1f8) = &DAT_05ae9cd8;
  *(uint *)(param_1 + 0x234) = (uint)*(ushort *)(param_1 + 0x236) << 0x10;
  (**(code **)(puVar1 + 0x18))(&PTR_PTR_04c4bc88);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_58 = PTR_s_gsys_geometry_culling_04c4bc90;
  local_60 = puVar1;
  lStack_48 = FUN_039b4320(uVar9,&local_60);
  if ((((lStack_48 != 0) &&
       (local_50 = puVar1, uVar5 = FUN_038d30c0(&local_24,&local_50,0xffffffff), (uVar5 & 1) != 0))
      && (local_24 != 0)) &&
     (*(int *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x118) +
                                  (ulong)*(ushort *)(param_1 + 0x14) * 0x70) + 0x18) + 0x24) == 3))
  {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      plVar7 = malloc(0x38);
    }
    else {
      plVar7 = param_4;
      if (param_4 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar8 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
    }
    puVar1 = PTR_DAT_04bd1690;
    *(undefined4 *)(plVar7 + 1) = 0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *(undefined4 *)(plVar7 + 6) = 0xffffffff;
    *plVar7 = (long)(puVar1 + 0x10);
    plVar7[4] = 0;
    plVar7[5] = -0x100000000;
    *(long **)(param_1 + 0x250) = plVar7;
    uVar4 = (**(code **)(*param_2 + 0x218))(param_2);
    FUN_039fb270(plVar7,param_4,param_1,uVar4);
  }
  return 1;
}

