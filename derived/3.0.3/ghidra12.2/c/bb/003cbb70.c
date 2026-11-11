
void FUN_003cbb70(long param_1,long param_2)

{
  MessageQueueType *pMVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *local_48;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    puVar12 = (ulong *)(param_2 + 3U >> 2);
    puVar13 = *(ulong **)(param_1 + 0xf8);
    local_48 = *(ulong **)(param_1 + 0x100);
    puVar8 = (ulong *)((long)puVar13 + (long)puVar12);
    if (local_48 <= puVar13) {
      if (puVar8 <= *(ulong **)(param_1 + 0xf0)) goto LAB_003cbe68;
      if (puVar12 <= local_48) {
        lVar7 = *(long *)(param_1 + 0xe8);
        *(ulong **)(param_1 + 0xf8) = puVar12;
        if (lVar7 != 0) goto LAB_003cbeb0;
      }
      goto LAB_003cbb9c;
    }
    if (local_48 < puVar8) goto LAB_003cbb9c;
LAB_003cbe68:
    lVar7 = *(long *)(param_1 + 0xe8) + (long)puVar13 * 4;
    *(ulong **)(param_1 + 0xf8) = puVar8;
    puVar12 = puVar8;
    if (lVar7 == 0) goto LAB_003cbb9c;
LAB_003cbeb0:
    if (puVar12 == local_48) {
      *(undefined1 *)(param_1 + 0x108) = 1;
    }
    *(ulong **)(lVar7 + 0x10) = puVar12;
  }
  else {
LAB_003cbb9c:
    pMVar1 = (MessageQueueType *)(param_1 + 0x70);
    uVar5 = nn::os::TryReceiveMessageQueue((ulong *)&local_48,pMVar1);
    while ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)((long)local_48 + 0xc);
      iVar9 = *(int *)(param_1 + 0x110);
      puVar8 = local_48;
      do {
        puVar13 = puVar8;
        iVar9 = iVar9 + -1;
        *(int *)(param_1 + 0x110) = iVar9;
        puVar8 = (ulong *)*puVar13;
      } while (puVar8 != (ulong *)0x0);
      uVar5 = puVar13[2];
      *(undefined1 *)(param_1 + 0x108) = 0;
      *(ulong *)(param_1 + 0x100) = uVar5;
      uVar5 = nn::os::TryReceiveMessageQueue((ulong *)&local_48,pMVar1);
    }
    if (*(char *)(param_1 + 0x108) == '\0') {
      puVar12 = (ulong *)(param_2 + 3U >> 2);
      puVar13 = *(ulong **)(param_1 + 0xf8);
      local_48 = *(ulong **)(param_1 + 0x100);
      puVar8 = (ulong *)((long)puVar13 + (long)puVar12);
      if (puVar13 < local_48) {
        if (local_48 < puVar8) goto LAB_003cbbfc;
LAB_003cbea0:
        lVar7 = *(long *)(param_1 + 0xe8) + (long)puVar13 * 4;
        puVar12 = puVar8;
      }
      else {
        if (puVar8 <= *(ulong **)(param_1 + 0xf0)) goto LAB_003cbea0;
        if (local_48 < puVar12) goto LAB_003cbbfc;
        lVar7 = *(long *)(param_1 + 0xe8);
      }
      *(ulong **)(param_1 + 0xf8) = puVar12;
      if (lVar7 != 0) goto LAB_003cbeb0;
    }
LAB_003cbbfc:
    piVar2 = (int *)(param_1 + 0xd8);
    puVar8 = (ulong *)(param_2 + 3U >> 2);
    do {
      do {
        while (uVar5 = *(ulong *)(param_1 + 200), uVar5 == 0) {
          uVar5 = nn::os::TryReceiveMessageQueue((ulong *)&local_48,pMVar1);
          if ((uVar5 & 1) == 0) {
            if (*(code **)(param_1 + 0x10) != (code *)0x0) {
              (**(code **)(param_1 + 0x10))();
            }
            nn::os::ReceiveMessageQueue((ulong *)&local_48,pMVar1);
          }
          *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)((long)local_48 + 0xc);
          iVar9 = *(int *)(param_1 + 0x110);
          do {
            puVar13 = local_48;
            iVar9 = iVar9 + -1;
            *(int *)(param_1 + 0x110) = iVar9;
            local_48 = (ulong *)*puVar13;
          } while (local_48 != (ulong *)0x0);
          local_48 = (ulong *)puVar13[2];
          *(undefined1 *)(param_1 + 0x108) = 0;
          *(ulong **)(param_1 + 0x100) = local_48;
          puVar12 = *(ulong **)(param_1 + 0xf8);
          puVar13 = (ulong *)((long)puVar12 + (long)puVar8);
          if (local_48 <= puVar12) goto LAB_003cbd98;
LAB_003cbd14:
          if (puVar13 <= local_48) {
LAB_003cbc20:
            lVar7 = *(long *)(param_1 + 0xe8) + (long)puVar12 * 4;
            *(ulong **)(param_1 + 0xf8) = puVar13;
            if (lVar7 != 0) goto LAB_003cbdc0;
          }
        }
        iVar9 = *(int *)(param_1 + 0xdc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = nn::os::TrySendMessageQueue((MessageQueueType *)(param_1 + 0x18),uVar5);
        if ((uVar6 & 1) == 0) {
          if (*(code **)(param_1 + 0x10) != (code *)0x0) {
            (**(code **)(param_1 + 0x10))();
          }
          nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x18),uVar5);
        }
        *(int *)(*(long *)(param_1 + 200) + 0xc) = iVar9;
        *(ulong *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
        do {
          uVar5 = nn::os::TryReceiveMessageQueue((ulong *)&local_48,pMVar1);
          if ((uVar5 & 1) == 0) {
            if (*(code **)(param_1 + 0x10) != (code *)0x0) {
              (**(code **)(param_1 + 0x10))();
            }
            nn::os::ReceiveMessageQueue((ulong *)&local_48,pMVar1);
          }
          *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)((long)local_48 + 0xc);
          iVar10 = *(int *)(param_1 + 0x110);
          puVar13 = local_48;
          do {
            puVar12 = puVar13;
            iVar10 = iVar10 + -1;
            *(int *)(param_1 + 0x110) = iVar10;
            puVar13 = (ulong *)*puVar12;
          } while (puVar13 != (ulong *)0x0);
          puVar11 = (ulong *)puVar12[2];
          *(undefined1 *)(param_1 + 0x108) = 0;
          *(ulong **)(param_1 + 0x100) = puVar11;
        } while (*(int *)((long)local_48 + 0xc) != iVar9);
        puVar12 = *(ulong **)(param_1 + 0xf8);
        puVar13 = (ulong *)((long)puVar12 + (long)puVar8);
        local_48 = puVar11;
        if (puVar12 < puVar11) goto LAB_003cbd14;
LAB_003cbd98:
        if (puVar13 <= *(ulong **)(param_1 + 0xf0)) goto LAB_003cbc20;
      } while (local_48 < puVar8);
      lVar7 = *(long *)(param_1 + 0xe8);
      *(ulong **)(param_1 + 0xf8) = puVar8;
      puVar13 = puVar8;
    } while (lVar7 == 0);
LAB_003cbdc0:
    if (puVar13 == local_48) {
      *(undefined1 *)(param_1 + 0x108) = 1;
    }
    *(ulong **)(lVar7 + 0x10) = puVar13;
  }
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  return;
}

