
undefined8 FUN_027c3dcc(undefined8 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar8 = DAT_05ae7790;
  plVar5 = DAT_0537d558;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x12) == 0) && (DAT_04cac4e0 != 0)) && (DAT_05aed670 != 0)) &&
     ((*(long *)(DAT_05aed670 + 0x330) != 0 && (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) == 4))
     )) {
    if (DAT_05ae7790 == 0) {
      if (DAT_0537d558 == (long *)0x0) goto LAB_027c403c;
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      if ((plVar5 == (long *)0x0) || (*(long *)(lVar8 + 0x60) != lVar6)) goto LAB_027c403c;
    }
    lVar8 = *plVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      pbVar10 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
      if (7 < bVar4) {
        pbVar10 = (byte *)(lVar8 + 0x48);
      }
      if (((*pbVar10 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar4)) goto LAB_027c403c;
    }
    if (DAT_0556aa70 != 0) {
      local_34 = 0;
      iVar3 = *(int *)(DAT_0556aa70 + 0x10);
      if ((((iVar3 != 0) && (local_34 = 3, iVar3 != 3)) && (local_34 = 9, iVar3 != 9)) &&
         (((local_34 = 0x11, iVar3 != 0x11 && (local_34 = 0x15, iVar3 != 0x15)) &&
          ((local_34 = 0x18, iVar3 != 0x18 && (local_34 = 0x1d, iVar3 != 0x1d))))))
      goto LAB_027c403c;
    }
    if ((((DAT_055b0f38 == 0) || (*(int *)(DAT_055b0f38 + 0x10) == 0)) &&
        ((DAT_055b1af8 == 0 || (*(int *)(DAT_055b1af8 + 0x58) == 0)))) &&
       ((uVar7 = FUN_028b8da8(), (uVar7 & 1) != 0 && (uVar7 = FUN_028bc3a0(), (uVar7 & 1) != 0)))) {
      FUN_028bc68c(param_1 + 1);
      *(undefined1 *)(param_1 + 0x1c) = 0;
      param_1[0x1b] = 0;
      puVar9 = param_1 + 0x1a;
      *puVar9 = 0;
      *param_1 = param_2;
      *param_2 = 0;
      if (DAT_0556aa70 != 0) {
        *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 2;
      }
      lVar8 = *plVar5;
      bVar4 = *(byte *)(lVar8 + 0x473);
      pbVar10 = PTR_DAT_04bc1220;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar10 = (byte *)(lVar8 + 0x473);
        }
      }
      puVar2 = (undefined8 *)((long)puVar9 + ((long)(char)*pbVar10 & 0xffffffffU) * 2);
      if (7 < *pbVar10) {
        puVar2 = puVar9;
      }
      if (*(char *)((long)puVar2 + 1) == '\0') {
        *(undefined2 *)puVar2 = 0x101;
      }
      local_38 = 0;
      FUN_01de7124(&DAT_05590f08,&local_38,4);
      FUN_03ebb160(param_1 + 0x11,1);
      return 1;
    }
  }
LAB_027c403c:
  *param_2 = 2;
  return 0;
}

