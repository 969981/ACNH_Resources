
ulong FUN_0016b7dc(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_04bcb698;
  if (param_3 == 0) {
    return 0;
  }
  uVar12 = *(long *)(*(long *)(param_1 + 8) + 0x10) - *(long *)(*(long *)(param_1 + 8) + 0x20);
  uVar10 = 8;
  do {
    bVar3 = *param_2;
    if (uVar10 == 8) {
      if (uVar12 == 0) {
        uVar12 = FUN_0016b684(param_1,0);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        uVar12 = *(long *)(*(long *)(param_1 + 8) + 0x10) - *(long *)(*(long *)(param_1 + 8) + 0x20)
        ;
      }
      else {
        **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = 0;
      }
    }
    uVar13 = (ulong)*(uint *)(puVar5 + (ulong)bVar3 * 8);
    uVar2 = *(uint *)((long)(puVar5 + (ulong)bVar3 * 8) + 4);
    uVar11 = uVar10 - uVar13;
    if (uVar10 < uVar13 || uVar11 == 0) {
      lVar7 = *(long *)(param_1 + 8);
      pbVar9 = *(byte **)(lVar7 + 0x20);
      if (uVar10 == uVar13) {
        uVar12 = uVar12 - 1;
        *pbVar9 = *pbVar9 | (byte)uVar2;
        uVar11 = 8;
        *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + 1;
      }
      else {
        uVar13 = uVar13 - uVar10;
        uVar12 = uVar12 - 1;
        *pbVar9 = *pbVar9 | (byte)(uVar2 >> (ulong)((uint)uVar13 & 0x1f));
        uVar1 = 0;
        if ((uVar13 & 7) != 0) {
          uVar1 = 8 - ((uint)uVar13 & 7);
        }
        uVar2 = uVar2 << (ulong)(uVar1 & 0x1f);
        *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + 1;
        if (uVar12 < uVar13 + 7 >> 3) {
          if (uVar13 < 0x19) {
            if (uVar13 < 0x11) {
              if (8 < uVar13) goto LAB_0016b9a4;
LAB_0016b9b8:
              if (uVar13 != 8) {
                iVar6 = FUN_0016b684(param_1,uVar2);
                if (iVar6 != 0) goto LAB_0016ba80;
                lVar7 = *(long *)(param_1 + 8);
                uVar11 = 8 - uVar13;
                goto LAB_0016ba2c;
              }
              iVar6 = FUN_0016b628();
              if (iVar6 != 0) goto LAB_0016ba80;
              goto LAB_0016ba58;
            }
LAB_0016b95c:
            iVar6 = FUN_0016b628(param_1,uVar2 >> 0x10);
            if (iVar6 == 0) {
              uVar13 = uVar13 - 8;
LAB_0016b9a4:
              iVar6 = FUN_0016b628(param_1,uVar2 >> 8);
              if (iVar6 == 0) {
                uVar13 = uVar13 - 8;
                goto LAB_0016b9b8;
              }
            }
          }
          else {
            iVar6 = FUN_0016b628(param_1,uVar2 >> 0x18);
            if (iVar6 == 0) {
              uVar13 = uVar13 - 8;
              goto LAB_0016b95c;
            }
          }
LAB_0016ba80:
          uVar11 = (ulong)iVar6;
          goto LAB_0016b898;
        }
        uVar4 = (undefined1)uVar2;
        if (uVar13 < 8) {
          **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = uVar4;
          uVar11 = 8 - uVar13;
          lVar7 = *(long *)(param_1 + 8);
        }
        else {
          if (uVar13 < 0x19) {
            if (0x10 < uVar13) goto LAB_0016b9dc;
            if (8 < uVar13) goto LAB_0016b9f8;
          }
          else {
            uVar13 = uVar13 - 8;
            puVar8 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar8 + 1;
            *puVar8 = (char)(uVar2 >> 0x18);
LAB_0016b9dc:
            uVar13 = uVar13 - 8;
            puVar8 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar8 + 1;
            *puVar8 = (char)(uVar2 >> 0x10);
LAB_0016b9f8:
            puVar8 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar8 + 1;
            *puVar8 = (char)(uVar2 >> 8);
            if (uVar13 != 0x10) {
              **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = uVar4;
              uVar11 = 0x10 - uVar13;
              lVar7 = *(long *)(param_1 + 8);
LAB_0016ba2c:
              uVar12 = *(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 0x20);
              goto LAB_0016b898;
            }
          }
          puVar8 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
          *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar8 + 1;
          *puVar8 = uVar4;
LAB_0016ba58:
          lVar7 = *(long *)(param_1 + 8);
          uVar11 = 8;
        }
        uVar12 = *(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 0x20);
      }
    }
    else {
      pbVar9 = *(byte **)(*(long *)(param_1 + 8) + 0x20);
      *pbVar9 = *pbVar9 | (byte)(uVar2 << (ulong)((uint)uVar11 & 0x1f));
LAB_0016b898:
      if ((long)uVar11 < 0) {
        return uVar11 & 0xffffffff;
      }
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    uVar10 = uVar11;
    if (param_3 == 0) {
      if (uVar11 < 8) {
        lVar7 = *(long *)(param_1 + 8);
        **(byte **)(lVar7 + 0x20) =
             **(byte **)(lVar7 + 0x20) |
             (byte)(*(uint *)(puVar5 + 0x804) >>
                   (ulong)(*(int *)(puVar5 + 0x800) - (int)uVar11 & 0x1f));
        *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + 1;
      }
      return 0;
    }
  } while( true );
}

