
void FUN_01f625d4(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_60;
  char *pcStack_58;
  undefined1 local_44 [4];
  
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x508);
  local_60 = &PTR_LAB_048f9770;
  pcStack_58 = "FireworksSitBenchNpcIndex";
  FUN_02743234(&local_60,iVar3 + 1);
  local_44[0] = (undefined1)iVar3;
  uVar6 = (ulong)local_60 >> 0x30;
  local_60 = (undefined **)CONCAT26((ushort)uVar6 & 0xff00,0xff0000000000);
  if (-1 < DAT_053d1280) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1280,&local_60,local_44,1,0);
  }
  FUN_01edf024(param_1);
  lVar7 = *(long *)(param_1 + 8);
  if (*(int *)(lVar7 + 0x750) != 1) goto LAB_01f627a0;
  uVar4 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd64);
  if ((uVar4 >> 2 & 1) == 0) {
    if ((uVar4 >> 3 & 1) == 0) {
      if ((((*(long *)(lVar7 + 0x3b8) == 0) || ((uVar4 >> 1 & 1) != 0)) ||
          (*(long *)(lVar7 + 0x60) == 0)) ||
         (((uint)*(undefined8 *)(*(long *)(lVar7 + 0x3b8) + 0xad58) >> 2 & 1) == 0))
      goto LAB_01f62754;
      pfVar8 = (float *)(*(long *)(lVar7 + 0x60) + 0x15fc);
    }
    else {
      pfVar8 = (float *)(*(long *)PTR_DAT_04bb3968 + 0xd74);
    }
    lVar7 = *(long *)(param_1 + 0x18);
    fVar9 = *pfVar8;
    fVar10 = pfVar8[1];
    fVar11 = pfVar8[2];
    uVar6 = FUN_02085a50(lVar7,3,0);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(lVar7 + 0x801) = 1;
      lVar1 = lVar7 + 0x10;
      lVar2 = lVar1 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar7 + 0x294)) {
        lVar2 = lVar1;
      }
      *(float *)(lVar2 + 0x14) = fVar11 + -5000.0;
      *(float *)(lVar2 + 0xc) = fVar9 + 0.0;
      *(float *)(lVar2 + 0x10) = fVar10 + 1000.0;
      lVar2 = lVar1 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar7 + 0x294)) {
        lVar2 = lVar1;
      }
      *(undefined1 *)(lVar2 + 0x7e) = 0;
    }
  }
LAB_01f62754:
  lVar7 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar7 + 0x288);
  *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  *(undefined4 *)(lVar7 + 0x28c) = *(undefined4 *)(lVar7 + 0x290);
  uVar5 = *(uint *)(lVar7 + 0x294);
  *(uint *)(lVar7 + 0x290) = uVar5;
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  *(uint *)(lVar7 + 0x294) = uVar4;
  *(int *)(param_1 + 0x1365c) = (int)((ulong)uVar4 * 0x1c2 >> 0x20) + 0x1c2;
LAB_01f627a0:
  *(undefined4 *)(param_1 + 0x7884) = 0;
  return;
}

