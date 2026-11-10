
void FUN_0023edc0(int *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ushort uVar10;
  undefined4 local_610 [4];
  ulong local_600;
  undefined1 *local_5f8;
  undefined4 local_5f0;
  int *local_5e8;
  undefined4 local_5e0;
  int local_5d4;
  ErrorResultVariant aEStack_5d0 [12];
  undefined1 auStack_5c4 [4];
  undefined1 auStack_5c0 [8];
  uint local_5b8;
  undefined4 local_5b4;
  ErrorResultVariant aEStack_5b0 [1360];
  
  if ((param_3 & 0xff) < 2) {
    if (((*(long *)(param_2 + 0x58) != 0) && (uVar6 = FUN_0023e298(), (uVar6 & 1) != 0)) &&
       (uVar6 = FUN_0023b688(*(undefined8 *)(param_2 + 0x58)), puVar2 = PTR_DAT_04bcb8b8,
       (uVar6 & 1) != 0)) {
      plVar7 = (long *)FUN_00232c44(*(undefined8 *)
                                     (*(long *)PTR_DAT_04bcb8b8 +
                                      (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 8 +
                                     0x168),param_3);
      (**(code **)(*plVar7 + 0x28))(param_1,plVar7,&local_5b4,&local_5b8,0x425);
      if (*param_1 != 0) {
        return;
      }
      lVar1 = param_2 + 0x5c4;
      FUN_002284c0(lVar1,0);
      FUN_00228480(param_2 + 0x5c5,local_5b8);
      memcpy((void *)(param_2 + 0x5c9),&local_5b4,(ulong)local_5b8);
      uVar3 = local_5b8;
      *(long *)(param_2 + 0xdc8) = *(long *)(param_2 + 0xdc8) + 1;
      FUN_002284c0(lVar1 + (ulong)(local_5b8 + 5),2);
      uVar5 = FUN_0023b688(*(undefined8 *)(param_2 + 0x58));
      FUN_002284c0(lVar1 + (ulong)(uVar3 + 6),uVar5 & 1);
      FUN_00228460(lVar1 + (ulong)(uVar3 + 7),*(undefined8 *)(param_2 + 0xdc8));
      memcpy((void *)(lVar1 + (ulong)(uVar3 + 0xf)),(void *)(param_2 + 0xdd0),0x10);
      uVar6 = FUN_0023b688(*(undefined8 *)(param_2 + 0x58));
      if ((uVar6 & 1) == 0) {
        FUN_0028d4cc(&local_600);
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x1f)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x20)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x21)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x22)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x23)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x24)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x25)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x26)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x27)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x28)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x29)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x2a)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x2b)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x2c)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x2d)) = uVar4;
        uVar4 = FUN_0028d5ac(&local_600);
        lVar9 = 0;
        *(undefined1 *)(lVar1 + (ulong)(uVar3 + 0x2e)) = uVar4;
        do {
          uVar4 = FUN_0028d5ac(&local_600);
          iVar8 = (int)lVar9;
          lVar9 = lVar9 + 1;
          *(undefined1 *)(param_2 + (ulong)(uVar3 + 0x2f + iVar8) + 0x5c4) = uVar4;
        } while (lVar9 != 0x100);
      }
      else {
        uVar6 = FUN_0021f720(*(long *)(param_2 + 0x58) + 0x70);
        if ((uVar6 & 1) == 0) {
          local_5d4 = 0;
          FUN_0021f618(&local_600,*(long *)(param_2 + 0x58) + 0x70,&local_5d4);
          FUN_00228480(auStack_5c4,local_5d4);
        }
        else {
          local_600 = 0;
          local_5f8 = (undefined1 *)0x0;
          FUN_0021f764(&local_5d4,*(long *)(param_2 + 0x58) + 0x70,&local_600);
          memcpy(auStack_5c4,&local_600,4);
        }
        FUN_00228460(auStack_5c0,*(undefined8 *)(param_2 + 0xdc8));
        FUN_0023de1c(&local_600,*(undefined8 *)(param_2 + 0x58),(void *)(param_2 + 0xdd0),0x10,
                     &local_5d4,0x10);
        FUN_00229780(param_1,&local_600);
        local_600 = CONCAT44(local_600._4_4_,1);
        local_5f0 = 0xc;
        local_5e0 = 0x10;
        local_5f8 = auStack_5c4;
        local_5e8 = &local_5d4;
        FUN_00221dc8(local_610,param_2 + 0x5c4 + (ulong)(uVar3 + 0x2f),param_2 + 0xde0,0x100,
                     param_2 + 0x5c4 + (ulong)(uVar3 + 0x1f),0x10,&local_600);
      }
      if (*(short *)(param_2 + 0xee0) == 0) {
        return;
      }
      uVar10 = 0;
      do {
        FUN_0021f508(&local_600,*(long *)(param_2 + 0x58) + 0x70);
        local_5e8 = (int *)CONCAT62(local_5e8._2_6_,uVar10 + 30000);
        FUN_00226ec4(&local_5d4,param_2 + 0x60,lVar1,local_5b8 + 0x12f,&local_600,auStack_5c4);
        FUN_00229780(param_1,&local_5d4);
        if (*param_1 != 0) {
          local_5d4 = 0x4c0d;
          local_610[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5d0,(Result *)local_610);
          if (*param_1 != local_5d4) {
            FUN_00237738(*(undefined8 *)(*(long *)puVar2 + 8));
          }
        }
        FUN_0021f584(&local_600);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(param_2 + 0xee0));
      return;
    }
    local_5b4 = 0x10c08;
  }
  else {
    local_5b4 = 0x10c07;
  }
  local_600 = local_600 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5b0,(Result *)&local_600);
  FUN_002296c4(param_1,&local_5b4);
  return;
}

