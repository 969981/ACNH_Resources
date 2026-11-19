
ulong FUN_03c32c90(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 local_18;
  
  local_18 = 0;
  if (0x13f < param_5) {
    uVar6 = FUN_03c35ec0(param_4 + 0x40,0x100,param_4,&local_18,(long)&local_18 + 4,param_2,param_3)
    ;
    if (0xffffffffffffff88 < uVar6) {
      return uVar6;
    }
    uVar13 = *param_1;
    if (local_18._4_4_ <= (uVar13 & 0xff) + 1) {
      *(char *)param_1 = (char)uVar13;
      *(undefined1 *)((long)param_1 + 1) = 0;
      cVar5 = (char)(local_18 >> 0x20);
      *(char *)((long)param_1 + 2) = cVar5;
      *(char *)((long)param_1 + 3) = (char)(uVar13 >> 0x18);
      if (local_18._4_4_ != 0) {
        if (local_18._4_4_ == 1) {
          iVar7 = 0;
          lVar8 = 1;
        }
        else {
          iVar7 = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            lVar8 = param_4 + uVar11 * 4;
            iVar2 = *(int *)(lVar8 + 8);
            iVar1 = (*(int *)(lVar8 + 4) << (ulong)((uint)uVar11 & 0x1f)) + iVar7;
            *(int *)(lVar8 + 4) = iVar7;
            *(int *)(lVar8 + 8) = iVar1;
            iVar7 = (iVar2 << (ulong)((uint)uVar11 + 1 & 0x1f)) + iVar1;
            uVar9 = uVar11 + 2;
          } while (((ulong)local_18._4_4_ & 0xfffffffe) != uVar11 + 2);
          lVar8 = uVar11 + 3;
        }
        if ((local_18 & 0x100000000) != 0) {
          *(int *)(param_4 + lVar8 * 4) = iVar7;
        }
      }
      if ((int)local_18 == 0) {
        return uVar6;
      }
      uVar9 = 0;
      do {
        bVar4 = *(byte *)(param_4 + 0x40 + uVar9);
        uVar10 = (ulong)bVar4;
        uVar3 = *(uint *)(param_4 + uVar10 * 4);
        uVar11 = (ulong)uVar3;
        iVar7 = (1 << (ulong)(bVar4 & 0x1f)) >> 1;
        uVar13 = iVar7 + uVar3;
        if (uVar3 < uVar13) {
          pcVar12 = (char *)((long)param_1 + uVar11 * 2 + 5);
          do {
            pcVar12[-1] = (char)uVar9;
            uVar11 = uVar11 + 1;
            *pcVar12 = (cVar5 + '\x01') - bVar4;
            uVar13 = *(int *)(param_4 + uVar10 * 4) + iVar7;
            pcVar12 = pcVar12 + 2;
          } while (uVar11 < uVar13);
        }
        uVar9 = uVar9 + 1;
        *(uint *)(param_4 + uVar10 * 4) = uVar13;
      } while (uVar9 != (local_18 & 0xffffffff));
      return uVar6;
    }
  }
  return 0xffffffffffffffd4;
}

