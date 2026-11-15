
void FUN_0205a660(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  byte *pbVar9;
  undefined4 local_38;
  undefined1 uStack_34;
  byte bStack_33;
  byte bStack_32;
  uint uStack_31;
  undefined2 local_2d;
  
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  puVar5 = PTR_DAT_04bb27d0;
  if (*(int *)(param_1 + 0x90) != 0) {
    bVar3 = *(byte *)(param_1 + 0x97);
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205a770;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x90) = 0xff08002300000000;
      *(undefined2 *)(param_1 + 0xc0) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      bStack_33 = bVar3 << 2 | 3;
      uVar2 = *(undefined4 *)puVar6;
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9c) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0xc2);
    }
  }
LAB_0205a770:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 200) != 0) {
    bVar3 = *(byte *)(param_1 + 0xcf);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205a864;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 200) = 0xff08002300000000;
      *(undefined2 *)(param_1 + 0xf8) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      bStack_33 = bVar3 << 2 | 3;
      uVar2 = *(undefined4 *)puVar6;
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd4) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0xfa);
    }
  }
LAB_0205a864:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x100) != 0) {
    bVar3 = *(byte *)(param_1 + 0x107);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205a95c;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x100) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x130) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x10c) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x132);
    }
  }
LAB_0205a95c:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x138) != 0) {
    bVar3 = *(byte *)(param_1 + 0x13f);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205aa54;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x138) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x168) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x144) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x16a);
    }
  }
LAB_0205aa54:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x170) != 0) {
    bVar3 = *(byte *)(param_1 + 0x177);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205ab4c;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x170) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x1a0) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x17c) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x1a2);
    }
  }
LAB_0205ab4c:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    bVar3 = *(byte *)(param_1 + 0x1af);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205ac44;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x1d8) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x1b4) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x1da);
    }
  }
LAB_0205ac44:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    bVar3 = *(byte *)(param_1 + 0x1e7);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205ad3c;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x210) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x1ec) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x212);
    }
  }
LAB_0205ad3c:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x218) != 0) {
    bVar3 = *(byte *)(param_1 + 0x21f);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205ae34;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x218) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x248) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x224) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x24a);
    }
  }
LAB_0205ae34:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x250) != 0) {
    bVar3 = *(byte *)(param_1 + 599);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) goto LAB_0205af2c;
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x250) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 600) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x280) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x25c) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x282);
    }
  }
LAB_0205af2c:
  puVar7 = PTR_DAT_04bb5018;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(param_1 + 0x288) != 0) {
    bVar3 = *(byte *)(param_1 + 0x28f);
    lVar8 = **(long **)puVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar9 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    if (*pbVar9 != bVar3) {
      if (bVar3 != 0xff) {
        pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar9 = (byte *)(lVar8 + 0x48);
        }
        if ((*pbVar9 >> 1 & 1) != 0) {
          return;
        }
      }
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x288) = 0xff08002300000000;
      *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
      *(undefined2 *)(param_1 + 0x2b8) = 0xffff;
      bVar3 = *puVar7;
      local_2d = 0;
      uVar2 = *(undefined4 *)puVar6;
      bStack_33 = bVar3 << 2 | 3;
      *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(param_1 + 0x294) = uVar2;
      bStack_32 = bVar3 >> 6 | bVar3 << 2;
      uStack_34 = 0xff;
      uStack_31 = (uint)(byte)(bVar3 >> 6 | 4);
      FUN_020e9c5c(&local_38,param_1 + 0x2ba);
    }
  }
  return;
}

