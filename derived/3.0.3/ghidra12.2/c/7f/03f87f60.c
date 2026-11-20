
void FUN_03f87f60(long *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  
  lVar9 = *param_1;
  lVar8 = 0;
  bVar1 = *(byte *)((long)param_1 + 0x105e5);
  bVar10 = *(byte *)((long)param_1 + 0x105cc);
  do {
    if ((*(byte *)((long)param_1 + lVar8 + 0x10157) & bVar1) != 0) {
      uVar2 = *(undefined2 *)(lVar9 + (ulong)*(ushort *)((long)param_1 + lVar8 + 0x10132));
      *(undefined2 *)((long)param_1 + lVar8 + 0x1012c) = 0;
      *(undefined1 *)((long)param_1 + lVar8 + 0x10155) = 0;
      *(undefined4 *)((long)param_1 + lVar8 + 0x10118) = 0;
      *(undefined2 *)((long)param_1 + lVar8 + 0x1015a) = 0;
      *(undefined2 *)((long)param_1 + lVar8 + 0x1012e) = 0x10;
      *(undefined4 *)((long)param_1 + lVar8 + 0x10110) = 0;
      *(undefined2 *)((long)param_1 + lVar8 + 0x10114) = 0;
      *(undefined2 *)((long)param_1 + lVar8 + 0x10134) = uVar2;
      if (*(char *)((long)param_1 + lVar8 + 0x10152) == '\0') {
        bVar3 = *(byte *)((long)param_1 + lVar8 + 0x10151);
        if ((char)bVar3 < '\0') {
          bVar5 = bVar3 >> 5;
          uVar7 = 1;
          uVar6 = *(undefined4 *)(&DAT_041eb544 + ((ulong)bVar3 & 0x1f) * 4);
        }
        else {
          iVar4 = (uint)bVar3 * 0x10;
          *(short *)((long)param_1 + lVar8 + 0x1012c) = (short)iVar4;
          bVar5 = 3;
          *(int *)((long)param_1 + lVar8 + 0x10120) =
               *(short *)((long)param_1 + lVar8 + 0x10128) * iVar4 >> 3;
          *(int *)((long)param_1 + lVar8 + 0x10124) =
               *(short *)((long)param_1 + lVar8 + 0x1012a) * iVar4 >> 3;
          uVar6 = 0xffffffff;
          uVar7 = 0xffffffff;
        }
        *(byte *)((long)param_1 + lVar8 + 0x10150) = bVar5;
        *(undefined4 *)((long)param_1 + lVar8 + 0x10144) = uVar6;
        *(undefined4 *)((long)param_1 + lVar8 + 0x10140) = uVar7;
        bVar10 = *(byte *)((long)param_1 + lVar8 + 0x10158) & bVar10;
        *(byte *)((long)param_1 + 0x105cc) = bVar10;
      }
      else {
        *(undefined1 *)((long)param_1 + lVar8 + 0x10150) = 9;
        *(undefined4 *)((long)param_1 + lVar8 + 0x10140) = 1;
        *(uint *)((long)param_1 + lVar8 + 0x10144) =
             (uint)*(ushort *)((long)param_1 + lVar8 + 0x10136);
      }
    }
    lVar8 = lVar8 + 0x90;
  } while (lVar8 != 0x480);
  return;
}

