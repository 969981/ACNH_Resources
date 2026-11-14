
void FUN_01b88e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined **local_70 [4];
  
  FUN_01b88a30();
  local_70[0] = &PTR_FUN_04a39500;
  uVar5 = 0;
  lVar6 = *(long *)PTR_DAT_04bb4788;
  do {
    if ((int)*(uint *)(lVar6 + 0x1c0) < 1) {
      lVar2 = *(long *)(lVar6 + 0xb0);
      if (lVar2 == 0) {
LAB_01b88f70:
        FUN_01b88ca0(param_1,param_3);
        return;
      }
      uVar4 = 0;
      if (*(uint **)(lVar2 + 8) != (uint *)0x0) {
        uVar4 = **(uint **)(lVar2 + 8);
      }
      if (uVar4 <= uVar5) goto LAB_01b88f70;
      if ((((lVar2 != 0) && (puVar3 = *(uint **)(lVar2 + 8), puVar3 != (uint *)0x0)) &&
          ((*(uint *)(lVar6 + 200) <= uVar5 ||
           (*(char *)(*(long *)(lVar6 + 0xd0) + (long)(int)uVar5) != '\0')))) &&
         (((uVar5 < *puVar3 && (puVar3[1] != 0)) && ((ushort)puVar3[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar3 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        lVar2 = (ulong)(puVar3[1] * uVar5 + (uint)(ushort)puVar3[2] * 8 + iVar7) + (long)puVar3;
        goto joined_r0x01b88f68;
      }
    }
    else {
      if (*(uint *)(lVar6 + 0x1c0) <= uVar5) goto LAB_01b88f70;
      uVar4 = uVar5;
      if (*(uint *)(lVar6 + 0x1b0) <= uVar5) {
        uVar4 = 0;
      }
      lVar2 = *(long *)(*(long *)(lVar6 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x01b88f68:
      if (((lVar2 != 0) && (uVar1 = (*(code *)*local_70[0])(local_70), (uVar1 & 1) != 0)) &&
         (uVar5 < 0x80)) {
        *(byte *)(param_1 + (ulong)(uVar5 >> 3)) =
             *(byte *)(param_1 + (ulong)(uVar5 >> 3)) | (byte)(1 << (ulong)(uVar5 & 7));
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

