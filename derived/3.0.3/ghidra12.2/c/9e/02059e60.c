
void FUN_02059e60(ulong param_1)

{
  long lVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined4 local_80;
  undefined1 local_7c;
  char local_7b;
  undefined1 local_7a;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined1 uStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined2 local_6d;
  
  puVar7 = PTR_DAT_04bb37e0;
  iVar13 = 0;
  iVar9 = 0;
  lVar1 = param_1 + 0x90;
  do {
    piVar15 = (int *)(lVar1 + (long)iVar13 * 0x38);
    piVar12 = piVar15 + 1;
    if ((*piVar15 == 1) &&
       (param_1 = FUN_01392d64(lVar1 + (long)iVar13 * 0x38 + 0x18), (int)param_1 == 2)) {
      lVar10 = lVar1 + (long)iVar13 * 0x38;
      uStack_74 = 0;
      bStack_73 = 0;
      bStack_72 = 0;
      bStack_71 = 0;
      uStack_70 = (undefined1)iVar9;
      pcVar11 = (char *)(lVar10 + 7);
      cVar5 = *pcVar11;
      puVar14 = (undefined1 *)(lVar10 + 5);
      uStack_76 = CONCAT11((char)*piVar12,*puVar14);
      local_78 = 9;
      lVar10 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar10 + 0x473);
      if ((long)(char)bVar6 == 0xffffffffffffffff) {
        pcVar8 = &DAT_0537bdbc;
      }
      else {
        puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
        if (7 < bVar6) {
          puVar2 = (uint *)(lVar10 + 0x48);
        }
        pcVar8 = &DAT_0537bdbc;
        if ((*puVar2 & 8) != 0) {
          pcVar8 = (char *)(lVar10 + 0x473);
        }
      }
      if (*pcVar8 == cVar5) {
        local_80 = CONCAT31(local_80._1_3_,cVar5);
        FUN_020f28c4(&local_78,&local_80);
      }
      else {
        local_80 = 0;
        local_7a = 0;
        local_7c = 4;
        local_7b = cVar5;
        if (-1 < DAT_053d16a0) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_053d16a0,&local_80,&local_78,10,0);
        }
      }
      lVar10 = lVar1 + (long)iVar13 * 0x38;
      *(undefined1 *)piVar12 = 0x23;
      *piVar15 = 0;
      *puVar14 = 0;
      *(undefined1 *)(lVar10 + 6) = 8;
      *pcVar11 = -1;
      *(undefined4 *)(lVar10 + 8) = 0xffffffff;
      *(undefined2 *)(lVar10 + 0xc) = *(undefined2 *)puVar7;
      *(undefined *)(lVar10 + 0xe) = puVar7[2];
      *(undefined *)(lVar10 + 0xf) = puVar7[3];
      uVar3 = *(undefined4 *)(puVar7 + 4);
      *(undefined2 *)(lVar10 + 0x30) = 0xffff;
      *(undefined4 *)(lVar10 + 0x10) = uVar3;
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      local_6d = 0;
      uStack_74 = 0xff;
      bStack_73 = DAT_0537bdb8 << 2 | 3;
      bStack_72 = DAT_0537bdb8 >> 6 | DAT_0537bdb8 << 2;
      bStack_71 = DAT_0537bdb8 >> 6 | 4;
      param_1 = FUN_020e9c5c(&local_78,lVar10 + 0x32);
    }
    iVar4 = *piVar15;
    local_78 = (undefined1)iVar4;
    uStack_77 = (undefined1)((uint)iVar4 >> 8);
    uStack_76 = (undefined2)((uint)iVar4 >> 0x10);
    if (iVar4 == 5) {
      param_1 = FUN_0205a3c8(param_1,piVar12);
      if ((param_1 & 1) != 0) {
        *piVar15 = 6;
        param_1 = FUN_020f27f0(3,CONCAT11((char)*piVar12,
                                          *(undefined1 *)(lVar1 + (long)iVar13 * 0x38 + 5)),0,0,
                               iVar9);
      }
    }
    else if ((iVar4 == 4) && (param_1 = FUN_0205a0ec(param_1,piVar12), (param_1 & 1) != 0)) {
      *piVar15 = 5;
    }
    iVar9 = iVar9 + 1;
    iVar13 = iVar13 + 1;
  } while (iVar9 != 10);
  return;
}

