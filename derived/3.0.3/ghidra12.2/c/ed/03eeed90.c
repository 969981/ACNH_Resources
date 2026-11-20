
void FUN_03eeed90(undefined4 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  local_90 = CONCAT44(local_90._4_4_,1);
  if ((*(ushort *)(param_2 + 0x60) >> 1 & 1) == 0) {
    if (*(int *)(param_2 + 0x2c) != -1) {
      FUN_03eef000(param_2);
      *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
    }
    puVar5 = PTR_DAT_04bd0da0;
    switch(*(undefined4 *)(param_2 + 100)) {
    case 0:
      FUN_03eef320(param_1,param_2);
      return;
    case 1:
      FUN_03ef2520(param_1,param_2);
      return;
    case 2:
      FUN_03ef2930(param_1,param_2);
      return;
    case 4:
      uVar3 = *(uint *)(param_2 + 0x28);
      if (*(uint *)(param_2 + 0x90) <= uVar3) {
        uVar3 = 0;
      }
      lVar6 = *(long *)(*(long *)(param_2 + 0x98) + (long)(int)uVar3 * 0x88 + 0x80);
      if ((((lVar6 != 0) && (*(char *)(lVar6 + 0x670) != '\0')) && (*(long *)(param_2 + 0x18) != 0))
         && ((lVar6 = *(long *)(*(long *)(param_2 + 0x18) + 8), lVar6 != 0 &&
             (uVar3 = *(uint *)(param_2 + 0x70), uVar3 != 0)))) {
        lVar11 = *(long *)(param_2 + 0x78);
        uVar10 = 0;
        do {
          lVar1 = lVar11 + ((long)((ulong)uVar10 << 0x20) >> 0x1a);
          if (*(short *)(lVar1 + 0x30) != -1 && *(short *)(lVar1 + 0x32) != -1) {
            local_90 = *(undefined8 *)puVar5;
            local_88 = *(undefined8 *)(puVar5 + 8);
            local_80 = 0;
            local_78 = 0;
            FUN_03ef8788(lVar6,&local_90,(long)*(short *)(lVar1 + 0x32));
            lVar8 = *(long *)(param_2 + 0x18);
            sVar4 = *(short *)(lVar1 + 0x32);
            FUN_03efa0c0(lVar8,(int)sVar4);
            uVar9 = (uint)sVar4;
            uVar2 = uVar9;
            if (*(uint *)(lVar8 + 0x10) <= (uint)(int)sVar4) {
              uVar2 = 0;
            }
            puVar7 = (undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar2 * 0x1c);
            *puVar7 = (undefined4)local_90;
            puVar7[1] = local_90._4_4_;
            puVar7[2] = (undefined4)local_88;
            puVar7[3] = local_88._4_4_;
            puVar7[4] = (undefined4)local_80;
            puVar7[5] = local_80._4_4_;
            puVar7[6] = local_78;
            if (*(uint *)(lVar8 + 0x30) <= uVar9) {
              uVar9 = 0;
            }
            *(undefined1 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar9) = 2;
            *(undefined1 *)(lVar8 + 0x40) = 0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
      }
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 100) = 3;
    }
  }
  return;
}

