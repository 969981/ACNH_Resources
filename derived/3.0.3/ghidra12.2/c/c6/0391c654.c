
byte FUN_0391c654(long param_1,long param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  bVar1 = *(byte *)(param_1 + 0x550);
  if ((bVar1 >> 5 & 1) == 0) goto LAB_0391cad8;
  uVar2 = *(ushort *)(param_1 + 0x110) >> (ulong)(param_5 & 0x1f);
  uVar4 = (uint)uVar2;
  if (uVar2 < 2) {
    uVar4 = 1;
  }
  iVar3 = uVar4 << (ulong)(bVar1 >> 6 & 1);
  if (((bVar1 >> 4 & 1) == 0) || (*(int *)(param_1 + 0x324) != iVar3)) {
    if (*(long *)(param_1 + 600) != 0) {
      FUN_0390a734(param_1 + 0x278,1,0x5a,iVar3,iVar3,1,1,0,0,1);
      puVar10 = *(undefined4 **)(param_1 + 600);
      *(char **)(param_1 + 0x308) = "CubeMapRenderDepth";
      bVar6 = false;
      local_68 = *puVar10;
      uStack_64 = puVar10[1];
      local_60 = *(undefined8 *)(puVar10 + 2);
      uStack_58 = *(undefined8 *)(puVar10 + 4);
      *(undefined4 *)(param_1 + 0x278) = local_68;
      *(undefined4 *)(param_1 + 0x27c) = uStack_64;
      *(undefined8 *)(param_1 + 0x280) = local_60;
      *(undefined8 *)(param_1 + 0x288) = uStack_58;
      if ((*(byte *)(param_1 + 0x2c6) >> 1 & 1) != 0) {
        bVar6 = 0x11 < *(ushort *)(param_1 + 0x310) &&
                *(ushort *)(param_1 + 0x310) - 0x59 < 0xffffffd6;
      }
      FUN_038fd3e0(param_1 + 0x2c8,&local_68,param_1 + 0x2a8,0,"CubeMapRenderDepth",bVar6,1);
    }
    lVar7 = *(long *)(param_1 + 0x1b0);
    if (lVar7 != 0) {
      FUN_0390a734(param_1 + 0x1b8,1,*(undefined2 *)(lVar7 + 0x98),iVar3,iVar3,1,1,
                   *(undefined1 *)(lVar7 + 0x4e),0,1);
      puVar10 = *(undefined4 **)(param_1 + 0x1b0);
      *(char **)(param_1 + 0x248) = "CubeMapRenderColor";
      bVar6 = false;
      local_68 = *puVar10;
      uStack_64 = puVar10[1];
      local_60 = *(undefined8 *)(puVar10 + 2);
      uStack_58 = *(undefined8 *)(puVar10 + 4);
      *(undefined4 *)(param_1 + 0x1b8) = local_68;
      *(undefined4 *)(param_1 + 0x1bc) = uStack_64;
      *(undefined8 *)(param_1 + 0x1c0) = local_60;
      *(undefined8 *)(param_1 + 0x1c8) = uStack_58;
      if ((*(byte *)(param_1 + 0x206) >> 1 & 1) != 0) {
        bVar6 = 0x11 < *(ushort *)(param_1 + 0x250) &&
                *(ushort *)(param_1 + 0x250) - 0x59 < 0xffffffd6;
      }
      FUN_038fd3e0(param_1 + 0x208,&local_68,param_1 + 0x1e8,0,"CubeMapRenderColor",bVar6,1);
    }
  }
  *(int *)(param_1 + 0x318) = param_3;
  *(int *)(param_1 + 0x31c) = param_4;
  *(uint *)(param_1 + 800) = param_5;
  *(int *)(param_1 + 0x324) = iVar3;
  if (*(long *)(param_1 + 0x1b0) == 0) {
    param_4 = param_4 + param_3 * 6;
    if (*(long *)(param_1 + 600) == 0) {
      *(undefined8 *)(param_1 + 0x348) = 0;
      *(undefined8 *)(param_1 + 0x350) = 0;
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
      uVar2 = *(ushort *)(param_1 + 0x110) >> (ulong)(param_5 & 0x1f);
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(undefined8 *)(param_1 + 0x370) = 0;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(undefined8 *)(param_1 + 0x380) = 0;
      fVar11 = (float)uVar2;
      *(undefined8 *)(param_1 + 0x388) = 0;
      FUN_01560750(param_1 + 0x390,param_1 + 0xe0,param_5,param_4);
      uVar4 = *(uint *)(param_1 + 1000);
      *(long *)(param_1 + 0x348) = param_1 + 0x390;
      if (uVar4 != 0xffffffff) {
        if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
          uVar5 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
          if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar5) {
            uVar5 = 0;
          }
          if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) ==
              0) {
            *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
            goto LAB_0391caa4;
          }
        }
        if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
          uVar8 = 0x112;
          uVar9 = 0x12;
        }
        else {
          uVar8 = 0x111;
          uVar9 = 0x11;
        }
        if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
          uVar9 = uVar8;
        }
        (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar9);
        *(undefined8 *)(param_2 + 0x100) = 0;
      }
LAB_0391caa4:
      lVar7 = *(long *)(param_1 + 0x328);
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(float *)(param_1 + 0x340) = fVar11;
      goto LAB_0391cab4;
    }
    local_98 = *(undefined4 *)(param_1 + 0x260);
    uStack_94 = *(undefined4 *)(param_1 + 0x264);
    local_90 = *(undefined8 *)(param_1 + 0x268);
    uStack_88 = *(undefined8 *)(param_1 + 0x270);
    FUN_0391cb00(param_1,param_2,param_1 + 0xe0,param_5,param_4,param_1 + 0x278,&local_98);
  }
  else if (*(long *)(param_1 + 600) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    *(undefined8 *)(param_1 + 0x370) = 0;
    fVar11 = (float)uVar2;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    FUN_01560750(param_1 + 0x390,param_1 + 0x1b8,0,0);
    uVar4 = *(uint *)(param_1 + 1000);
    *(long *)(param_1 + 0x348) = param_1 + 0x390;
    if (uVar4 != 0xffffffff) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar5 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar5) {
          uVar5 = 0;
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
          goto LAB_0391ca7c;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar8 = 0x112;
        uVar9 = 0x12;
      }
      else {
        uVar8 = 0x111;
        uVar9 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar9 = uVar8;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar9);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
LAB_0391ca7c:
    lVar7 = *(long *)(param_1 + 0x328);
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(float *)(param_1 + 0x340) = fVar11;
LAB_0391cab4:
    *(float *)(param_1 + 0x344) = fVar11;
    *(float *)(param_1 + 0x330) = fVar11;
    *(float *)(param_1 + 0x334) = fVar11;
    (**(code **)(lVar7 + 0x38))(param_1 + 0x328,param_2);
  }
  else {
    local_80 = *(undefined4 *)(param_1 + 0x260);
    uStack_7c = *(undefined4 *)(param_1 + 0x264);
    local_78 = *(undefined8 *)(param_1 + 0x268);
    uStack_70 = *(undefined8 *)(param_1 + 0x270);
    FUN_0391cb00(param_1,param_2,param_1 + 0x1b8,0,0,param_1 + 0x278,&local_80);
  }
  *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) | 0x10;
LAB_0391cad8:
  return bVar1 >> 5 & 1;
}

