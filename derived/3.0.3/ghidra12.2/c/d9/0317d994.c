
void FUN_0317d994(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar1 = param_1 + 0x1f8;
  uVar6 = FUN_0267a9f0(lVar1);
  lVar10 = *(long *)(param_1 + 0x218);
  if (*(byte *)(lVar10 + 0x26c9) != 0xff) {
    uVar9 = *(int *)(lVar10 + 0x26d8) + (int)(char)~*(byte *)(lVar10 + 0x26c9);
    lVar2 = lVar10 + 0x238 + (ulong)uVar9 * 0x538;
    if (6 < uVar9) {
      lVar2 = lVar10 + 0x238;
    }
    iVar8 = 10000;
    switch(*(undefined4 *)(lVar2 + 0x168)) {
    case 0x39:
      uVar9 = 100;
      if (999 < uVar6) {
        uVar9 = 1000;
      }
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar6 / uVar9;
      }
      iVar8 = uVar4 * uVar9;
      break;
    case 0x3a:
      break;
    case 0x3b:
      iVar8 = 1000;
      break;
    case 0x3c:
      iVar8 = 100;
      break;
    default:
      goto switchD_0317da14_default;
    }
    FUN_01aeda40(&local_38,iVar8);
    uVar7 = FUN_02677c70(lVar1);
    FUN_03195900(param_1,&local_38,uVar7);
    puVar5 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = local_38;
    uStack_44 = uStack_34;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar5 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_38);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0)) {
          local_40 = lVar10;
        }
      }
    }
    iVar8 = FUN_01aed4b8(&local_50);
    if (iVar8 < 0) {
      FUN_0267af90(lVar1,-iVar8);
      lVar10 = *(long *)(param_1 + 0x228);
    }
    else {
      FUN_0267b340(lVar1);
      lVar10 = *(long *)(param_1 + 0x228);
    }
    if (((lVar10 != 0) && (iVar8 = FUN_0267a9f0(lVar1), *(char *)(lVar10 + 0x290) == '\0')) &&
       ((iVar3 = *(int *)(lVar10 + 0x260), iVar3 != iVar8 || (iVar3 != *(int *)(lVar10 + 0x264)))))
    {
      *(int *)(lVar10 + 0x294) = iVar3;
      *(int *)(lVar10 + 0x298) = iVar8;
      *(undefined1 *)(lVar10 + 0x290) = 1;
      *(undefined1 *)(lVar10 + 0x29c) = 1;
    }
  }
switchD_0317da14_default:
  return;
}

